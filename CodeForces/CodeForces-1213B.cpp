#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[150000];
        int cnt=0;

        for(int i =0 ; i<n ; ++i)
        {
            cin >> arr[i];
        }
        int min=arr[n-1];                              
        for (int i = n-2; i >=0 ; --i)
        {
            if(arr[i] > min )
            {
                cnt++;
            }
            else
            {
                min=arr[i];
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}

