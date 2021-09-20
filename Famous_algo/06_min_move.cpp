#include <bits/stdc++.h>
using namespace std;
 
// Function to return the minimum number
// of moves required to reach the cell
// containing N starting from (1, 1)
int min_moves(int n)
{
    // To store the required answer
    int ans = INT_MAX;
 
    // For all possible values of divisors
    for (int i = 1; i * i <= n; i++) {
 
        // If i is a divisor of n
        if (n % i == 0) {
 
            // Get the moves to reach n
            ans = min(ans, i + n / i - 2);
        }
    }
 
    // Return the required answer
    return ans;
}
 
// Driver code
int main()
{
    int n = 20;
 
    cout << min_moves(n);
 
    return 0;
}