#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;
        long long pow = 1;
        for (int i = 1; i <= 18; i++) {
            pow *= 10;
            if (n % (pow + 1) == 0) {
                ans.push_back(n/(pow + 1));
            }
        }
        sort(ans.begin(), ans.end());
        cout << (int) ans.size() << endl;
        for (int i = 0; i < (int) ans.size(); i++) {
            cout << ans[i] << " ";
        }
        if ((int) ans.size() > 0) {
            cout << endl;
        }
    }
}
