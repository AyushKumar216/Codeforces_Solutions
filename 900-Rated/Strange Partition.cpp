#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long temp;
        long long mini = 0;
        long long maxi = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            maxi += (temp / k) + (temp % k != 0);
            mini += temp;
        }
        cout << (mini / k) + (mini % k != 0) << " " << maxi << endl;
    }
}