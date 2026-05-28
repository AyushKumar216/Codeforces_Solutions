#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector <int> v(26, 0);
    int count = 0;
    for (int i = 0; i < (int) s.length(); i++) {
        if (v[s[i] - 'a'] == 0) {
            count++;
            v[s[i] - 'a'] = 1;
        }
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}