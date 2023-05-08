#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0 ; i < m ; i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+m);

   int answer = 2000;
    for (int i = 0; i <=m-n ; ++i) {
        answer = min(answer, arr[abs(n-1+i)] - arr[i]);
    }
    cout<<answer;
    return 0;
}
