#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector <int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int capacity = 0;
        for (int i = 1; i < n; i++) {
            capacity = max(capacity, v[i] - v[i - 1]);
        }
        capacity = max(capacity, v[0]);
        capacity = max(capacity, 2 * (x - v[n - 1]));
        cout << capacity << endl;
    }
}