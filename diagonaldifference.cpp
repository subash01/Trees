#include <bits/stdc++.h>

using namespace std;



int main()
{
    int arr[100][100],n,i,j,sum1=0,sum2=0,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum2=sum2+arr[i][n-i-1];
    }
    ans=abs(sum1-sum2);
    cout<<ans;
}

