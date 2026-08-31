#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> mp(1001, 0);
        int semi = -1;
        int maxm = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            sum += v[i];
        }
        for (int i = 1; i <= 1000; i++) {
            if (mp[i] > maxm) {
                maxm = mp[i];
                semi = i;
            }
        }
        if (maxm <= n - maxm + 1) {
            cout << sum << endl;
        } else {
            sum -= maxm * semi;
            int temp = n - maxm;
            while (temp--) {
                sum += semi;
            }
            sum += 2 * semi;
            cout << sum << endl;
        }
    }
}