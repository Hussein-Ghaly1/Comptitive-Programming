#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    char s;
    string str;
    cin>>n>>s;
    int count=0;
    while (n--)
    {
        cin>>str;
        bool good = true;
        for (char i = '0'; i <= s ; ++i)
        {
            if(str.find(i) == -1)
            { good = false; break;}

        }
        if(good)
            count++;
    }
    cout<<count;
    return 0;
}
