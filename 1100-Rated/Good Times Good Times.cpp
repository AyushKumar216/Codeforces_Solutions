#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        long long y = 1;
        long long temp = x;
        while (temp) {
            y *= 10;
            temp /= 10;
        }
        cout << y + 1 << endl;
    }
}