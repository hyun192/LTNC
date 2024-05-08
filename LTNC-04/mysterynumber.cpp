#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int A[N], B[N+1];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }

    for (int j=0; j<N+1; j++){
        cin >> B[j];
    }

    sort (A, A+N);
    sort (B, B+N+1);

    if (A[N-1]!=B[N]) cout << B[N];
    else{
        for (int k=0; k<N; k++){
            if (A[k]!=B[k]) cout << B[k];
            break;
        }
    }
    return 0;
}
