#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        sort(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout <<"\n";
    }
    return 0;
}