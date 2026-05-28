#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i < (int) s.length(); i++) {
        if ((int) s[i] <= 90) {
            upper++;
        } else {
            lower++;
        }
    }
    for (int i = 0; i < (int) s.length(); i++) {
        if (upper > lower) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}