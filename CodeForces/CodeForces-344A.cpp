#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    int count=1;
    int arr[100000];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i-1]!=arr[i])
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}
