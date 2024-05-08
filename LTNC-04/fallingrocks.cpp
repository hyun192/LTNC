#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int W, H;
    cin >> W >> H;
    char a[H][W];
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (a[i][j]=='Y') {
                if (a[i+1][j]=='E') a[i+1][j]='Y';
                if (a[i+1][j+1]=='E' && a[i][j+1]=='E') a[i+1][j+1]='Y';
                if (a[i+1][j-1]=='E' && a[i][j-1]=='E') a[i+1][j-1]='Y';
            }
        }
    }
    for (int i=0; i<W; i++) {
        if (a[H-1][i]=='Y') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
