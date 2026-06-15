#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int two = 0;
        int three = 0;
        while (n % 2 == 0 && n > 0) {
            n /= 2;
            two++;
        }
        while (n % 3 == 0 && n > 0) {
            n /= 3;
            three++;
        }
        if (n > 1 || three < two) {
            cout << "-1" << endl;
        } else {
            cout << 2 * three - two << endl;
        }
    }
}