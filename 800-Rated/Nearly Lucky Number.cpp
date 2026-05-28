#include <iostream>
using namespace std;

int main() {
    int count = 0;
    long long n;
    cin >> n;
    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            count++;
        }
        n /= 10;
    }
    bool lucky = true;
    int init = count;
    while (count > 0) {
        if (count % 10 != 4 && count % 10 != 7) {
            lucky = false;
            break;
        }
        count /= 10;
    }
    if (lucky && init != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}