#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sumf = 0, suml = 0;
        for (int i = 0; i < 3; i++)
        {
            sumf += s[i] - '0';
        }
        for (int i = 3; i < 6; i++)
        {
            suml += s[i] - '0';
        }
        if(sumf == suml)
        {;
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}