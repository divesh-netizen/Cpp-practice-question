#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z) { return min(min(x, y), z); }

class Solution
{
public:
    int editDist(string str1, string str2, int m, int n)
    {
        // create a table to store results of subproblem
        int dp[m + 1][n + 1];
        // fill d[][] in bottom up manner
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                // if first string is empty the the only option
                // is to insert all characters of second string
                if (i == 0)
                    dp[i][j] = j; // min:operation is j.
                // if second string is empty , only option was to remove all
                // character of the first string
                else if (j == 0)
                    dp[i][j] = i; // min:operation is i.
                // if the last character is same, ignore last char and
                // recur for remaining string
                else if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                // if the last character is different consider all posibilities
                // and find the minimum
                else
                    dp[i][j] = 1 +
                               min(dp[i][j - 1], // Insert
                                   dp[i - 1][j], // Remove
                                   dp[i - 1][j - 1]); // Replace
            }
        }
        return dp[m][n];
    }
    int editDistance(string str1, string str2)
    {
        int m = str1.length();
        int n = str2.length();
        return editDist(str1, str2, m, n);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        Solution ob;
        int ans = ob.editDistance(str1, str2);
        cout << ans << "\n";
    }
    return 0;
}