#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int new_s;
    cin >> new_s;

    int *b = new int[new_s];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = n; i < new_s; i++)
    {
        cin >> b[i];
    }

    delete[] a;

    for (int i = 0; i < new_s; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}