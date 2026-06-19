#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string que, req;
        cin >> que >> req;
        vector <int> v(26, 0);
        for (int i = 0; i < (int) req.size(); i++) {
            v[req[i] - 'A']++;
        }
        int left = (int) req.size() - 1;
        bool flag = true;
        for (int i = (int) que.length() - 1; i >= 0 && left >= 0; i--) {
            if (que[i] == req[left]) {
                left--;
                v[que[i] - 'A']--;
            } else if (v[que[i] - 'A']) {
                flag = false;
                break;
            } 
        }
        if (flag == false || left != -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}