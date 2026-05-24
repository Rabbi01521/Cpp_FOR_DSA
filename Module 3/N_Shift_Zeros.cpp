#include <bits/stdc++.h>
using namespace std;

void shiftZeros(int n)
{
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int fre[10001] = {0};
    int pos = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            fre[pos] = a[i];
            pos++;
        }
        else
        {
            count++;
        }
    }

    for (int i = pos; i < n; i++)
    {
        fre[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << fre[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    shiftZeros(n);

    return 0;
}