int arr[100],n,i,d,temp,j;
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    while(d!=0)
    {
      temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];

        }
        arr[i]=temp;
    d--;
	
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

