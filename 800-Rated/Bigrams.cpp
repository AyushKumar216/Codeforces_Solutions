#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int twos = 0;
        int maxm = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp >= 2) {
                twos++;
            }
            maxm = max(maxm, temp);
        }
        if (maxm >= 3 || twos >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}