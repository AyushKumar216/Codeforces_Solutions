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
        vector <int> v (n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int index = n / 2;
        int left = index - 1;
        int right = index + 1;
        while (left >= 0 && v[left] == v[index]) {
            left--;
        }
        while (right < n && v[right] == v[index]) {
            right++;
        }
        int count = max(left + 1, n - right);
        cout << count << endl;
    }
}