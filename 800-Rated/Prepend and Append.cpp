#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            if ((int) s[left] ^ (int) s[right]) {
                n -= 2;
                left++;
                right--;
            } else {
                break;
            }
        }
        cout << max(0, n) << endl;
    }
}