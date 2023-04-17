#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin>>s;
        if (s.size() == 2)
        {
            cout<<s<<endl;
            continue;
        }
        cout<<s[0]<<s[1];
        for (int i = 3; i <s.size() ; i=i+2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
