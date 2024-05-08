#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a
        >> b;
    int lena = a.size(), lenb = b.size();
    string c=a+b;
    cout << lena << " " << lenb << endl;
    cout << c << endl;
    swap(a[0], b[0]);
    cout << a << " " << b;
    return 0;
}
