#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << std::right << std::setfill(' ')
            << std::setw(n) << std::string(i,'#') << std::endl;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    staircase(n);

    return 0;
}
