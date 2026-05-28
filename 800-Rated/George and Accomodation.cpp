#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int a, b;
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b - a >= 2) {
            count++;
        }
    }
    cout << count << "\n";
}