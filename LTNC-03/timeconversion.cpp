#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n=s.size();
    if(s[n-2]=='A') {
        s.erase(n-2,2);
        if(s[0]=='1' && s[1]=='2') {
            s[0]='0';
            s[1]='0';
        }
    }
    else {
        s.erase(n-2,2);
        if(s[0]=='1' && s[1]=='2');
        else {
            int h = (s[0] - '0') * 10 + (s[1] - '0');
            h = (h + 12) % 24;
            s[0] = '0' + (h / 10);
            s[1] = '0' + (h % 10);
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
