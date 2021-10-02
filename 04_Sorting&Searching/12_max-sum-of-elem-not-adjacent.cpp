#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution
{
    public:
    int dp[10001];
    int Solve(int i, int a[]){
        if(i<=-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int op1 = a[i] + Solve(i-2, a);
        int op2 = Solve(i-1, a);
        return dp[i] = max(op1, op2);
    }
    int FindMaxSum(int arr[], int n){
        memset(dp, -1, sizeof(dp));
        return Solve(n-1, arr);
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}