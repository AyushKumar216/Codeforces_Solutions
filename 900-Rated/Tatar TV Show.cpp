#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool temp = true;
        for (int i = 0; i < k; i++) {
            int one = 0;
            for (int j = i; j < n; j += k) {
                if (s[j] == '1')
                    one++;
            }
            if (one % 2 == 1) {
                temp = false;
                break;
            }
        }
        if (temp == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}