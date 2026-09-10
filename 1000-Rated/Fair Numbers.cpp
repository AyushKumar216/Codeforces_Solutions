#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool go = true;
        while (go) {
            long long copy = n;
            bool cont = false;
            while (copy) {
                int mod = copy % 10;
                if (mod == 0) {
                    copy /= 10;
                    continue;
                } else if (n % mod != 0) {
                    cont = true;
                    break;
                } 
                copy /= 10;
            }
            go = cont;
            if (cont) {
                n++;
            }
        }
        cout << n << endl;
    }
}