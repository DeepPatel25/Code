#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
        {
            continue;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = tolower(ch);
        }

        temp = temp + "." + ch;
    }

    cout << temp << endl;
    return 0;
}