#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.

int main()
{
    int n,i,j,k;
    cin >> n;
    k=n-1;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(j<=k)
           {
               cout<<" ";
           }
           else
           {
               cout<<"#";
           }

       }
       k=k-1;
       printf("\n");

   }
    return 0;
}
