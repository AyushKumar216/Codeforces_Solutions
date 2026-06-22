#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
        }
        if (n % 2 == 0) {
            cout << "2" << endl << "1 " << n << endl << "1 " << n << endl;
        } else {
            cout << "4" << endl << "1 " << n - 1 << endl << "1 " << n - 1 << endl << n - 1 << " " << n << endl << n - 1 << " " << n << endl;
        }
    }
}