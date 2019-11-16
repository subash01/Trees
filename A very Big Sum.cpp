#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long int arr[1000],sum=0;;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
