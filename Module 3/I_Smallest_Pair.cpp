#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t >> n;

    for (int i = 0; i < t; i++)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minimum = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int val = a[i] + a[j] + (j - i);
                minimum = min(minimum, val);
            }
        }

        cout << minimum << endl;
    }

    return 0;
}