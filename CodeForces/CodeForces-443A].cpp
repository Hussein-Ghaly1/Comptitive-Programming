#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s,temp="";
    getline(cin,s);
    for (int i = 0; i <s.size() ; ++i)
    {
        if(s[i] == '{' || s[i]== ',' || s[i]== '}' || s[i] == ' ') {
            continue;
        }
        else
        {
            if(temp.find(s[i]) == -1) {
                temp = temp + s[i];
            }
        }
    }
    cout<<temp.size();
    return 0;
}
