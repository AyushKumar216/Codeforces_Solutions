#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int without = n / (x + y) + (n % (x + y) != 0);
        int with = (n + 10 * y * z) / (x + 10 * y) + ((n + 10 * y * z) % (x + 10 * y) != 0);
        cout << min(with, without) << endl;
    }
}