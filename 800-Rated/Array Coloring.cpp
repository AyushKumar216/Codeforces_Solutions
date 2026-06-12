#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        int odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp % 2 == 1) {
                odd++;
            }
        }
        if (odd % 2 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}