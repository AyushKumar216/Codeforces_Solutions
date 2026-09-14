#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int sum = accumulate(v.begin(), v.end(), 0); 
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += v[i];
        if (cur > sum / 2) {
            cout << i + 1 << endl;
            break;
        }
    }
}