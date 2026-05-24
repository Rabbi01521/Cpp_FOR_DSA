#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int minPos, maxPos;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minPos = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxPos = i;
        }
    }

    swap(a[maxPos], a[minPos]);

    // cout << min << " " << minPos << " " << max << " " << maxPos;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}