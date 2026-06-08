#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mini = INT_MAX;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mini = min(mini, abs(temp));
    }
    cout << mini << endl;
}