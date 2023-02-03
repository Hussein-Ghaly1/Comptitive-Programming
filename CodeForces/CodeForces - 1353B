#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    int min = 30, max = 0 , index1=0 , index2=0 ,sum=0;
    while (t--)
    {
        sum=0;
        int n,k;
        cin >>n>>k;
        int arr1[30];
        int arr2[30];
        for (int i = 0; i < n; i++) {cin >> arr1[i];}
        for (int i = 0; i < n; i++) {cin >> arr2[i];}


        for (int i = 0 ; i < k ; i++)
        {
            min=arr1[0];
            max=arr2[0];
            index1=0;
            index2=0;
            for (int j =0 ; j < n ;j++)
            {

                if (min > arr1[j])
                {
                    min = arr1[j];
                    index1 = j;
                }
            }
            for (int l =0 ; l < n ;l++)
            {
                if (max < arr2[l])
                {
                    max = arr2[l];
                    index2 = l;
                }
            }

            if(arr1[index1]<arr2[index2])
            {
                int temp = arr1[index1];
                arr1[index1]=arr2[index2];
                arr2[index2]=temp;
            }

        }
        for (int i =0 ; i<n ;i++)
        {
            sum+=arr1[i];

        }
        cout<<sum<<endl;
    }
        return 0;
}
