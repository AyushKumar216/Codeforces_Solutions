#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int ans = 0;
        int n = (int) a.length();
        int m = (int) b.length();
        for (int i = n; i > 0; i--) {
            for (int j = 0; j <= n - i; j++) {
                string temp = a.substr(j, i);
                if (b.find(temp) != string::npos) {
                    ans = i;
                    break;
                }
            }
            if (ans != 0) {
                break;
            }
        }
        cout << (n - ans) + (m - ans) << endl;
    }
}