#include <bits/stdc++.h>
using namespace std;
#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int songs,size;
    long long sum1=0,sum2=0;
    cin>>songs>>size;
    int arr1[songs],arr2[songs],diff[songs];
    for (int i = 0; i <songs ; ++i) {
        cin>>arr1[i]>>arr2[i];
        diff[i]=arr1[i]-arr2[i];
        sum1+=arr1[i];
        sum2+=arr2[i];
    }
    if(sum2>size) {
        cout << -1 << endl;
        return 0;
    }
    sort(diff,diff+songs);
    int i;
    for (i = 0; size < sum1; ++i) {
        sum1-=diff[songs-1-i];
    }

    cout<<i<<endl;
    return 0;
}
