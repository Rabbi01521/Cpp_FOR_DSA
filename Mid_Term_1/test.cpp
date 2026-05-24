#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];

    while (cin.getline(s, 100005))
    {
        char ans[100005];
        int j = 0;

        // remove spaces
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                ans[j] = s[i];
                j++;
            }
        }

        ans[j] = '\0';

        // sort characters
        sort(ans, ans + j);

        cout << ans << endl;
    }

    return 0;
}