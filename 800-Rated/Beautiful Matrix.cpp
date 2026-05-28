#include <iostream>
using namespace std;

int main() {
    int row, col, temp;
    for (int i = 0; i < 25; i++) {
        cin >> temp;
        if (temp != 0) {
            row = i / 5;
            col = i % 5;
        }
    }
    cout << abs(2 - row) + abs(2 - col) << endl;
}