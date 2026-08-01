#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int>> v;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp % k == 0) {
                v.push_back({-1 * k, i + 1});
            } else {
                v.push_back({-1 * (temp % k), i + 1});
            }
        }  
        sort(v.begin(), v.end()); 
        for (int i = 0; i < n; i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}