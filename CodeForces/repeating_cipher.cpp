#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;

    string str;
    cin >> str;

    string temp = "";
    int i = 0;
    int j = 1;
    while (i < len)
    {
        temp += str[i];
        i += j;
        j++;
    }

    cout << temp << endl;
    return 0;
}