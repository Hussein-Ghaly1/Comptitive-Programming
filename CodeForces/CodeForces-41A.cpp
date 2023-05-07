#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

bool revrseStr(string& str1, string& str2)
{
    reverse(str1.begin(),str1.end());
    if(str1 == str2)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    string s1,s2;
    cin>>s1>>s2;
    revrseStr(s1,s2)?cout<<"YES":cout<<"NO";
    return 0;
}
