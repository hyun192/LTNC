#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> y >> x;
        if (y==1) s.insert(x);
        if (y==2) s.erase(x);
        if (y==3) {
            set<int>::iterator it=s.find(x);
            if (it==s.end()) cout << "No" << endl;
            else cout << "Yes" << endl;
        }

    }
    return 0;
}
