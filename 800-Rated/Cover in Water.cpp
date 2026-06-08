#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int temp = 0;
        bool mode = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                temp++;
            } else {
                temp = 0;
            }
            if (temp > 2) {
                mode = true;
            }
        }
        if (mode == false) {
            cout << count(s.begin(), s.end(), '.') << endl;
        } else {
            cout << "2" << endl;
        }
    }
}