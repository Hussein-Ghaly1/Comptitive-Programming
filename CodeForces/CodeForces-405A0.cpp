#include <bits/stdc++.h>
using namespace std;
#define endl "\n"



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int size;
    cin>>size;
    int arr[1000] = {0};

    for (int i = 0; i <size ; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    for (int i = 0; i <size ; ++i) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
