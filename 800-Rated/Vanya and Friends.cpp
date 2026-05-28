#include <iostream>
using namespace std;

int main() {
    int n, h, temp;
    cin >> n >> h;
    int count = n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > h) {
            count++;
        }
    }
    cout << count << endl;
}