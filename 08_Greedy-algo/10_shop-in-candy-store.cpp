#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int mi=0, ma=0;
        int i=0, j=N-1;
        while(i<=j){
            mi += candies[i];
            i++;
            j = j-K;
        }
        
        reverse(candies, candies+N);
        i=0, j=N-1;
        while(i<=j){
            ma += candies[i];
            i++;
            j = j-K;
        }

        return {mi, ma};

    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}