#include<bits/stdc++.h>
using namespace std;

/*
Example 1:

Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
Example 2:

Input:
N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
Output: 0
*/



class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1001][1001];
    int Solve(int w, int wt[], int val[], int n){
        if(w==0 || n==-1){
            return 0;
        }    
        if(dp[n][w] != -1){
            return dp[n][w];
        }
        if(wt[n] > w){
            return dp[n][w] = Solve(w, wt, val, n-1);
        }
        int a = val[n] + Solve(w-wt[n], wt, val, n-1);
        int b = Solve(w, wt, val, n-1);
        return dp[n][w] = max(a, b);
    }
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp, -1, sizeof(dp));
       return Solve(w, wt, val, n-1);
       
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}