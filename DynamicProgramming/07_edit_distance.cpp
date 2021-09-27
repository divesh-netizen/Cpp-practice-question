#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dp[101][101];
    int Solve(string s, string t, int m, int n){
        if(m==-1) return n+1;
        if(n==-1) return m+1;
        if(dp[m][n]!=-1) return dp[m][n];
        
        if(s[m] == t[n]) return Solve(s, t, m-1, n-1);
        int a = Solve(s, t, m-1, n-1);
        int b = Solve(s, t, m-1, n);
        int c = Solve(s, t, m ,n-1);
        return dp[m][n] = 1 + min(a, min(b, c));
    }
    int editDistance(string s, string t) {
        // Code here
        memset(dp, -1, sizeof(dp));
        int m = s.size();
        int n = t.size();
        return Solve(s, t, m-1, n-1);
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}