#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string target = "EGYPT";
    unordered_map<char, int> freq;
    for (char c:s)
    {
        c = toupper(c);
        if(c == 'E' || c=='G'||c=='Y'||c=='P'||c=='T')
        freq[c]++;
    }
    int cnt = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
    cout << cnt << endl;
    return 0;
}