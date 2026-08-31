#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    const int PEAK = 2 * 1e5 + 2;
    vector<bool> prime(PEAK, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i < PEAK; i++) {
        if (prime[i]) {
            for (int j = i * i; j < PEAK; j += i) {
                prime[j] = false;
            }
        }
    }
    while(t--) {
        int n;
        cin >> n;
        if (prime[n + 1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}