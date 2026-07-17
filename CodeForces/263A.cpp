#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int a, b;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }

    int cnt = 0;

    if (a == 2 && b == 2)
    {
        cout << cnt << endl;
        return 0;
    }

    if (a != 2)
    {
        if (a < 2)
        {
            while (a != 2)
            {
                a++;
                cnt++;
            }
        }
        else
        {
            while (a != 2)
            {
                a--;
                cnt++;
            }
        }
    }

    if (b != 2)
    {
        if (b < 2)
        {
            while (b != 2)
            {
                b++;
                cnt++;
            }
        }
        else
        {
            while (b != 2)
            {
                b--;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}