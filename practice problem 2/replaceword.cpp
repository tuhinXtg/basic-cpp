#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    string target = "EGYPT";
    int i = 0;
    while (i<s.length())
    {
        if(s.substr(i, 5) == target)
        {
            ans += ' ';
            i += 5;
        }
        else
        {
            ans += s[i];
            i++;
        }
        
    }
    cout << ans << endl;
    return 0;
}
