#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        string b;
        cin >> a;
        cin >> b;
        int odd1a = 0;
        int odd1b = 0;
        int even1a = 0;
        int even1b = 0;
        int odd2a = 0;
        int odd2b = 0;
        int even2a = 0;
        int even2b = 0;
        string odda;
        string oddb;
        string evena;
        string evenb;
        for (int i = 0; i < n; i++) {
            if (i % 2) {
                if (a[i] == '1') {
                    odd1a++;
                } else {
                    odd2a++;
                }
                if (b[i] == '1') {
                    odd1b++;
                } else {
                    odd2b++;
                }
                odda += a[i];
                oddb += b[i];
            } else {
                if (a[i] == '1') {
                    even1a++;
                } else {
                    even2a++;
                }
                if (b[i] == '1') {
                    even1b++;
                } else {
                    even2b++;
                }
                evena += a[i];
                evenb += b[i];
            }
        }
        if (odd1a == odd1b && even1a == even1b && odd2a == odd2b && even2a == even2b) {
            long long ans = 0;
            int o = (int) odda.length();
            int e = (int) evena.length();
            vector<int> oa1;
            vector<int> oa0;
            vector<int> ea1;
            vector<int> ea0;
            for (int i = 0; i < o; i++) {
                if (odda[i] != oddb[i]) {
                    if (odda[i] == '0') {
                        oa0.push_back(i);
                    } else {
                        oa1.push_back(i);
                    }
                }
            }
            for (int i = 0; i < e; i++) {
                if (evena[i] != evenb[i]) {
                    if (evena[i] == '0') {
                        ea0.push_back(i);
                    } else {
                        ea1.push_back(i);
                    }
                }
            }
            for (int i = 0; i < (int) oa1.size(); i++) {
                ans += 1LL * abs(oa1[i] - oa0[i]);
            }
            for (int i = 0; i < (int) ea1.size(); i++) {
                ans += 1ll * abs(ea1[i] - ea0[i]);
            }
            cout << ans << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}