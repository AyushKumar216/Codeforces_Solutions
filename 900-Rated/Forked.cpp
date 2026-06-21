#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        set<pair<int, int>> king;
        set<pair<int, int>> queen;
        vector<pair<int, int>> cases = {{a, b}, {-a, b}, {a, -b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};
        for (int i = 0; i < 8; i++) {
            king.insert({cases[i].first - xk, cases[i].second - yk});
            queen.insert({cases[i].first - xq, cases[i].second - yq});
        }
        int ans = 0;
        for (auto p : king) {
            if (queen.count(p)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}