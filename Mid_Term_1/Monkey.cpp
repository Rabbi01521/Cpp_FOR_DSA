#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];

    while (cin.getline(s, 100005))
    {
        char freq[26] = {0};

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                int val = s[i] - 'a';
                freq[val]++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            while (freq[i] > 0)
            {
                char letter = i + 'a'; 
                cout << letter;
                freq[i]--;
            }
        }

        cout << endl;
    }

    return 0;
}