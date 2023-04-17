#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    string temp1 = "qwertyuioplkjhgfdsazxcvbnm";
    string temp2 = "QWERTYUIOPLKJHGFDSAZXCVBNM";
    string s ;
    cin>>n>>s;
    bool bol = false;
    for (int i = 0; i <26 ; ++i) {
        bol = false;
        for (int j = 0; j < n ; ++j) {
            if(temp1[i]==s[j] or temp2[i]==s[j])
            {bol = true;break;}
        }
        if (!bol)
            break;
    }
    bol?cout<<"YES":cout<<"NO";
    return 0;
}
