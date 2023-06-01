#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        if (str == "++X" || str == "X++")
            x++;
        else if (str == "--X" || str == "X--")
            x--;
    }

    cout << x << endl;
    return 0;
}