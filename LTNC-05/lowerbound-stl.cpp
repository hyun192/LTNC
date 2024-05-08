#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {
     int n;
     cin >> n;
     vector<int>a(n);
     for (int i=0; i<n; i++) {
         cin >> a[i];
     }
     int q;
     cin >> q;
     while (q>0) {
         int x;
         cin >> x;
         q--;
         int it=lower_bound(a.begin(), a.end(), x)-a.begin()+1;
         if (a[it-1]==x) cout << "Yes ";
         else cout << "No ";
         cout << it << endl;
     }
     return 0;
}
