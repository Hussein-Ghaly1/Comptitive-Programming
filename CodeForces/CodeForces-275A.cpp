#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int matrix[3][3]={ {1,1,1},
                       {1,1,1},
                       {1,1,1} };
    int input[3][3];
    int var1,var2,var3,var4,var5,var6;
    for (int i = 0; i <3 ; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> input[i][j];
            if (input[i][j] % 2 != 0)
            {
                int var = !matrix[i][j];
                matrix[i][j]= var;
                if (j==0)
                {
                        var1=matrix[i][j+1];
                        matrix[i][j+1]=!var1;
                }
                if(i==0)
                {
                    var2 = matrix[i + 1][j];
                    matrix[i + 1][j] = !var2;
                }
                if(j==2)
                {
                    var3=matrix[i][j-1];
                    matrix[i][j-1]=!var3;
                }
                if(i==2)
                {
                    var4=matrix[i-1][j];
                    matrix[i-1][j]=!var4;
                }
                if(j>0 & j<2)
                {
                    var5=matrix[i][j+1];
                    matrix[i][j+1]=!var5;
                    var5=matrix[i][j-1];
                    matrix[i][j-1]=!var5;
                }
                if(i>0 & i<2)
                {
                    var6=matrix[i+1][j];
                    matrix[i+1][j]=!var6;
                    var6=matrix[i-1][j];
                    matrix[i-1][j]=!var6;
                }
            }
        }
    }
    for (int i = 0; i <3 ; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] == 0)
            {
                cout << '0';
            }
            else
            {
                cout << '1';
            }
        }
        cout << endl;
    }
    return 0;
}

