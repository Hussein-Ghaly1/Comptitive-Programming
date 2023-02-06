#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int arr[50];
    int sum=0;
    int cnt;
    for (int i = 0; true ; ++i)
    {
        cnt=0;
        cin>>arr[i];
        if(arr[i]==0)
        {break;}
            sum+=arr[i];
    }
    int total = sum / n;
    for (int i = 0; i <n ; ++i)
    {
        while(arr[i]>total)
        {
            cnt++;
            arr[i]--;
        }

    }
    cout<<"Set #1"<<'\n'<<"The minimum number of moves is "<<cnt<<"."<<'\n';

    return 0;
}

