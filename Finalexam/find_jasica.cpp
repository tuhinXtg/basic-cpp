#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int find = 0;
    while (ss >> word)
    {
        if(word == "Jessica")
        {
            find = 1;
            break;
        }
    }
    if(find)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}