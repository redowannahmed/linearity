#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //matA
    int m, n;
    cin>>m>>n;

    //matB
    int p, q;
  
    cin>>p>>q;

    // multiplication condition:
    if (m !=q )
    {
        cout << "wrong dimensions" << endl;
        return 0;
    }

    int matA[m][n];
    int matB[p][q];
    
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>matA[i][j];
        }
    }

    for (int i = 0; i<p; i++)
    {
        for (int j = 0; j<q; j++)
        {
            cin>>matB[i][j];
        }
    }

    int matR[m][q]; // resultant matrix

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<q; j++)
        {
            matR[i][j] = 0;
        }
    }

    int sum = 0;

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<q; j++)
        {
            for (int k = 0; k<n; k++)
            {
                sum += matA[i][k] * matB[k][j];
            }
            matR[i][j] = sum;
            sum = 0;
        }
    }


    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<q; j++)
        {
            cout << matR[i][j] << " ";
        }

        cout << endl;
    }
    
    return 0;
}