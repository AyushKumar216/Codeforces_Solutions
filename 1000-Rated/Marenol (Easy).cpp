#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        string b;
        cin >> a;
        cin >> b;
        int odd1a = 0;
        int odd1b = 0;
        int even1a = 0;
        int even1b = 0;
        int odd2a = 0;
        int odd2b = 0;
        int even2a = 0;
        int even2b = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2) {
                if (a[i] == '1') {
                    odd1a++;
                } else {
                    odd2a++;
                }
                if (b[i] == '1') {
                    odd1b++;
                } else {
                    odd2b++;
                }
            } else {
                if (a[i] == '1') {
                    even1a++;
                } else {
                    even2a++;
                }
                if (b[i] == '1') {
                    even1b++;
                } else {
                    even2b++;
                }
            }
        }
        if (odd1a == odd1b && even1a == even1b && odd2a == odd2b && even2a == even2b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}