#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string s;
    cin>>n>>s;
    int count = 0;
    for (int i =0; i <s.size()-1 ; ++i)
    {
        if(s[i]==s[i+1])
            count++;
    }
    cout<<count;
    return 0;
}
