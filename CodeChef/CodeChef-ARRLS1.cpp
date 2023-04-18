#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000000];
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    for(l =l-1; l<r ;l++)
    {
        cout<<arr[l]<<' ';
    }


return 0;
}
