#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        int cur = 0;
        int maxm = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp == 0) {
                cur++;
            } else {
                maxm = max(maxm, cur);
                cur = 0;
            }
        }
        maxm = max(maxm, cur);
        cout << maxm << endl;
    }
}