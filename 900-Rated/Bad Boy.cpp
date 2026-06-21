#include <iostream>
#include <vector>
using namespace std;

long long dist(long long x1, long long x2, long long y1, long long y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;
        long long maxm = -1;
        vector<pair<long long, long long>> p = {{1, 1}, {1, m}, {n, 1}, {n, m}};
        pair<long long, long long> ans1;
        pair<long long, long long> ans2;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                long long temp = dist(x, p[i].first, y, p[i].second) + dist(p[i].first, p[j].first, p[i].second, p[j].second) +
                                 dist(p[j].first, x, p[j].second, y);
                if (temp > maxm) {
                    maxm = temp;
                    ans1.first = p[i].first;
                    ans1.second = p[i].second;
                    ans2.first = p[j].first;
                    ans2.second = p[j].second;
                }
            }
        }
        cout << ans1.first << " " << ans1.second << " " << ans2.first << " " << ans2.second << endl;
    }
}