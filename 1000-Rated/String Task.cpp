#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < (int) s.length(); i++) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            continue;
        } else {
            cout << "." << s[i];
        }
    }
    cout << endl;
}