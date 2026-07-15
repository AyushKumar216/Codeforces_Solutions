#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            s += "I hate that ";
        } else {
            s += "I love that ";
        }
    }
    if (n % 2 == 1) {
        s += "I hate it";
    } else {
        s += "I love it";
    }
    cout << s << endl;
}