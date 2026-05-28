#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < (int) s1.length(); i++) {
        if (s1[i] == s2[i] || s1[i] - 'a' == s2[i] - 'A' || s1[i] - 'A' == s2[i] - 'a') {
            continue;
        } else {
            if (tolower(s1[i]) < tolower(s2[i])) {
                cout << "-1" << endl;
            } else {
                cout << "1" << endl;
            }
            return 0;
        }
    }
    cout << "0" << endl;
}