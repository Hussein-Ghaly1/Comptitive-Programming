#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    if (s[0] >= 'a')
    {
 
        s[0] = toupper(s[0]);
        cout<<s<<endl;
        return 0;
    }
    cout<<s<<endl;
    return 0
