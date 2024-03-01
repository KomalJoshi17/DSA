#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// Link : https://www.geeksforgeeks.org/problems/minimum-difference-among-k/1
// Time : O(NLogN)

class Solution{
  public:
    int minDiff(int arr[], int N, int k)
    {
        int ans = INT_MAX;
        sort(arr, arr + N);
        
        for(int i = 0; i + k - 1 < N; ++i)  
            ans = min(ans, arr[i + k - 1] - arr[i]);
            
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
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