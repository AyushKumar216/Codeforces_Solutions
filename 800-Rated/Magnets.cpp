#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    int group = 1;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i > 0) {
            if (b != a) {
                group++;
            }
        }
        b = a;
    }
    cout << group << endl;
}