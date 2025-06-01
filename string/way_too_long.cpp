#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if( s.size() > 10)
        {
            int cnt = 0;
            for (string::iterator i = (s.begin()+1); i < (s.end()-1); i++)
            {
                cnt++;
            }
            cout << s.front() << cnt << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}