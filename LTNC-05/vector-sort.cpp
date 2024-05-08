#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> v;
    int n;
    cin >> n;
    while (n>0) {
        int i;
        cin >> i;
        v.push_back(i);
        n--;
    }
    sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    return 0;
}
