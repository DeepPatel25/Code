#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;

    int t;
    cin >> t;

    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        if ((a[0] + a[1] + a[2]) >= 2)
            count++;
    }

    cout << count;
    return 0;
}