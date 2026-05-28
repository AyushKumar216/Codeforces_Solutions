#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = (int) s1.length();
    int n2 = (int) s2.length();
    if (n1 != n2) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < n1; i++) {
        if (s1[i] != s2[n2-i-1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}