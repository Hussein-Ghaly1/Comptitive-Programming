#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t;
 
    while (t--)
    {
        int n1;
        int n2; cin>>n1>>n2;
        string a,b; cin>>a>>b;
        reverse(b.begin(),b.end());
        a+=b;
        int cnt=0;
        for (int i = 0; i <n1+n2-1 ; ++i)
        {
            if(a[i]==a[i+1]){cnt++;}
        }
        cnt<=1?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
