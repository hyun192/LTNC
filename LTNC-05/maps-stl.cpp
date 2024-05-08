#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>m;
    int q;
    cin >> q;
    while (q--) {
        int y, type;
        string x;
        cin >> type >> x;
        if (type == 1) {
            cin >> y;
            m[x] += y;
        }
        if (type == 2) m.erase(x);
        if (type == 3) cout << m[x] << endl;
    }
    return 0;
}
