#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    if (s[0]>'Z') s[0]-=32;
    cout << s;
    return 0;
}
