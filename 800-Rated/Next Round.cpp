#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int temp = a[k - 1], count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= temp && a[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
}