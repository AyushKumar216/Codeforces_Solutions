#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if (d == a) {
        cout << "Friendship" << endl;
    } else if (d > a) {
        cout << "Danik" << endl;
    } else {
        cout << "Anton" << endl;
    }
}