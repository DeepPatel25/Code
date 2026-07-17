#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int f = str[0] - '0';
    if (f == 9)
        str[0] = '9';
    else if (f > 4)
        str[0] = (9 - f) + '0';

    for (int i = 1; i < str.size(); i++)
    {
        int temp = str[i] - '0';

        if (temp > 4)
            str[i] = (9 - temp) + '0';
    }

    cout << str << endl;

    return 0;
}