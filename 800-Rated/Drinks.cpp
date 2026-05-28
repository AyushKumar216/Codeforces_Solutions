#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int count = 0, temp;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        count += temp;
    }

    cout << ((double) count / (double) num) << endl;
}