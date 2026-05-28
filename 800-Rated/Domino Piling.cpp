#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int ans = n * (m / 2);
    if (m % 2 == 1) {
        ans += n / 2;
    }
    cout << ans << endl;
}