#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

void solvePowerSum(int X, int N, int* count, int startValue)
{
    if(X < 0)
    {
        return;
    }

    if(X == 0)
    {
        *count = *count + 1;
        return;
    }
    for(int i = startValue; i >= 1; i--)
    {
        X = X - pow(i, N);
        solvePowerSum(X, N, count, i - 1);
        X = X + pow(i, N);
    }
}

int powerSum(int X, int N) {
    int startValue = floor( pow((double)X , 1.0 / N) );
    int *count = new int(0);

    solvePowerSum(X, N, count, startValue);
    return *count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
