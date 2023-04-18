#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    string str, str2="";
    char temp ;
    cin>>str;
    for (int i = 0; i <str.size() ; ++i)
    {
        if (str[i]=='9' && i == 0)
        {
            cout<<'9';
            continue;
        }
        temp = 57 - str[i];
        temp= temp + 48;
     if(temp < str[i])
         cout<<temp;
     else
         cout<<str[i];

    }
    return 0;
}
