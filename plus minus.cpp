#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,arr[10000],i,pos=0,neg=0,ze=0;
    float ans1,ans2,ans3;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]==0)
        {
            ze++;
        }

    }
    ans1=(float)pos/(float)n;
    ans2=(float)neg/(float)n;
    ans3=(float)ze/(float)n;
    cout<<ans1<<"\n";
    cout<<ans2<<"\n";
    cout<<ans3;
    
}
