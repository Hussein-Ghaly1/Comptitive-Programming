#include <iostream>
using namespace std;
int main()
{
    int input=0;
    for(int j =0 ; j <5 ; j++ )
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> input;
            if (input == 1)
            {
                cout<<abs((j+1)-3) + abs((i+1)-3)<<endl;

            }
        }
    }
        return 0;
}
