#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int g = 0;
        int temp;
        for (int i = 1; i <= n; i++) {
            cin >> temp;
            g = gcd(g, abs(temp - i));
        }
        cout << g << endl;
    }
}