#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + c == 2 * b) {
            cout << "YES" << endl;
        } else if (a + c > 2 * b) {
            if ((a + c) % 2 == 0) {
                int temp = (a + c) / 2;
                if (temp % b == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        } else {
            int target = 2 * b - c;
            if (target % a == 0) {
                cout << "YES" << endl;
            } else {
                target = 2 * b - a;
                if (target % c == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
}