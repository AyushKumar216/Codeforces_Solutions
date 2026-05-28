#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector <int> a(7, 0);
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
        } 
        int max = a[0], sum = a[0];
        for (int i = 1; i < 7; i++) {
            if (a[i] > max) {
                max = a[i];
            }
            sum += a[i];
        }
        cout << (-1 * sum) + 2 * max << endl;
    }
}