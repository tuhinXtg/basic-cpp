#include<bits/stdc++.h>
using namespace std;
class cricketer{
    public:
    int jersy_no;
    string country;
};
int main()
{
    cricketer* dhoni = new cricketer;
    dhoni->jersy_no = 10;
    dhoni->country = "India";
    cricketer* kohli = new cricketer;
    kohli->jersy_no = dhoni->jersy_no;
    kohli->country = dhoni->country;
    delete dhoni;
    cout << "dhoni- " << dhoni->jersy_no << " "
    << dhoni->country<< "\n";
    cout << "kohli- " << kohli->jersy_no << " "
    << kohli->country<< "\n";

    return 0;
} 