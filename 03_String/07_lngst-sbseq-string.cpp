#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int LongestRepeatingSubsequence(string str){
            int n=str.length();
            // create and initialize DP table
            int dp[n+1][n+1];
            for(int i=0; i<=n; i++){
                for(int j=0; j<=n; j++){
                    // if character match and indeces are not the same
                    if(str[i-1] == str[j-1] && i!=j)
                        dp[i][j] = 1+dp[i-1][j-1];
                    // if character do not match
                    else    
                        dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
            return dp[n][n];
        }
};

int main(){
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        Solution ob;
        int ans = ob.LongestRepeatingSubsequence(str);
        cout<<ans<<"\n";
    }
    return 0;
    
}