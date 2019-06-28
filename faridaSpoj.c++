#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int dp[n]={0};
		dp[0]=a[0];
		dp[1]=max(dp[0],a[1]);
		for(int i=2;i<n;i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);//looking for maximum coins till ith monster
		}
		cout<<dp[n-1]<<endl;
	}
}
