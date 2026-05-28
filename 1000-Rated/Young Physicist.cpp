#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0, z = 0, xt, yt, zt, t;
    cin >> t;
    while (t--) {
        cin >> xt >> yt >> zt;
        x += xt;
        y += yt;
        z += zt;
    }
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}