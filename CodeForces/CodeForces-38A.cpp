#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n ; cin>>n;
   int arr[n-1];
   int sum=0;
    for (int i = 0; i < n - 1; ++i) {
        cin>>arr[i];
    }
    int a,b; cin>>a>>b;
    for (int i = 0; i < b-a ; ++i) {

        sum+=arr[a+i-1];

    }
    cout << sum<<endl;
    return 0;
}
