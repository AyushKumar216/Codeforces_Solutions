#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n, 0);
        vector <int> map(101, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            map[v[i]]++;
        }
        if (count(map.begin(), map.end(), n)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 100; i >= 0; i--) {
                if (map[i]) {
                    cout << i << " ";
                    map[i]--;
                }
            }
            for (int i = 100; i >= 0; i--) {
                while(map[i]--) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
}