#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <vector<int>> v(3, vector<int>(3, 1));
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> temp;
            if (temp % 2 == 1) {
                v[i][j] ^= 1;
                if (i != 0) {
                    v[i - 1][j] ^= 1;
                }
                if (i != 2) {
                    v[i + 1][j] ^= 1;
                }
                if (j != 0) {
                    v[i][j - 1] ^= 1;
                }
                if (j != 2) {
                    v[i][j + 1] ^= 1;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
    cout << endl;
}