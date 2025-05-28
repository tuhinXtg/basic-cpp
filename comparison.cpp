#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool isRight = false;

    if (S == '<') {
        isRight = (A < B);
    } else if (S == '>') {
        isRight = (A > B);
    } else if (S == '=') {
        isRight = (A == B);
    }

    cout << (isRight ? "Right" : "Wrong") << endl;
    return 0;
}