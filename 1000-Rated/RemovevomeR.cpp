#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string dup;
        dup.push_back(s[0]);
        for (int i = 1; i < n; i++) {
            if (s[i] != dup.back()) {
                dup.push_back(s[i]);
            }
        }
        if (dup == "10" || dup == "01") {
            cout << "2" << endl;
        } else {
            cout << "1" << endl;
        }
    }
}