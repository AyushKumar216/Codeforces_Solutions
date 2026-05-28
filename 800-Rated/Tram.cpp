#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxm = 0;
    int cur = 0;
    int a, b;
    while (n--) {
        cin >> a >> b;
        cur += b - a;
        maxm = max(maxm, cur);
    }
    cout << maxm << endl;
}