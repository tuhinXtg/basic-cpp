#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int d = 0;
    while (n--)
    {
        string s;
        cin >> s;
        for (string::iterator i = s.begin(); i < s.end(); i++)
        {
            if( s == "A")
            {
                a++;
            }
            else if(s == "D")
            {
                d++;
            }
        }
    }
    if(a == d)
    {
        cout << "Friendship";
    }
    else if(a<d)
    {
        cout << "Danik";
    }
    else{
        cout << "Anton";
    }
    
    return 0;
}