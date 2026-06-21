#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector <long long> pre;
    long long temp = 1;
    for (int i = 1; temp <= 1e18; i++) {
        temp = ((temp / gcd(temp, i)) * i);
        pre.push_back(temp);
    }
    int s = (int) pre.size();
    while (t--) {
        long long n;
        cin >> n;
        for (int i = s - 1; i >= 0; i--) {
            if (n % pre[i] == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}