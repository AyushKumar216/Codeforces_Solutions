#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, x;
    cin >> num;
    vector <int> a(num, 0);
    
    for (int i = 0; i < num; i++) {
        cin >> x;
        a[x - 1] = i + 1;
    }

    for (int i = 0; i < num; i++) {
        cout << a[i] << " ";
    }
}