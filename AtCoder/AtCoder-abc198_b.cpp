#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    bool bol =false;
    for (int i = 0; i <s.size() ; ++i) {
        string zero(i, '0');
        string x = zero + s;
        string temp=x;
        reverse(temp.begin(), temp.end());
        if (temp == x){
            bol= true; break;}
    }
    bol ? cout << "Yes" : cout << "No";
    return 0;
}
