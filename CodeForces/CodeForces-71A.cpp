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
        if (s.size() <= 10)
        {
            cout<<s<<endl;
            continue;
        }
        cout<<s[0]<<s.size()-2<<s.back()<<endl;
    }
    return 0;
}
