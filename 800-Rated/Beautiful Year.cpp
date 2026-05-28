#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    n++;
    vector <int> v (4, 0);
    for (int i = 3; i >= 0; i--) {
        v[i] = n % 10;
        n /= 10;
    }
    while (true) {
        if (v[0] != v[1] && v[0] != v[2] && v[0] != v[3] &&
            v[1] != v[2] && v[1] != v[3] && v[2] != v[3]) {
                break;
            } 
        v[3]++;
        if (v[3] == 10) {
            v[3] = 0;
            v[2]++;
        } 
        if (v[2] == 10) {
            v[2] = 0;
            v[1]++;
        } 
        if (v[1] == 10) {
            v[1] = 0;
            v[0]++;
        }
    }
    cout << v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3] << endl;
}