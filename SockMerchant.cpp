#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,arr[100],i,ans=0,count=0,j,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	for(i=0;i<n;i=i+count)
	{
		count=0;
		for(j=i;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				
			}
		}
		ans=ans+ceil(count/2);
	
	}
	cout<<ans;
	
	
}
