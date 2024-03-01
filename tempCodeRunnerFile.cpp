	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution obj;
		cout<<obj.minDiff(a,n,k)<<endl;
	}
	return 0;
}