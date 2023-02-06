#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int arr[50];
    int cnt = 0;

    for (int i = 0; i < n; ++i) {

        cin >> arr[i];
    }

    for (int i = 0; i <n; ++i)
    {
        if (arr[i] >= arr[k-1])
        {
            if (arr[i] != 0)
                cnt++;
        }

    }
    cout << cnt << '\n';
    return 0;
}
