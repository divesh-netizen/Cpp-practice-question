#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int getPairsCount(int arr[], int n, int k){
            unordered_map<int, int> m;
            //stor count of all element in map m;
            for(int i=0; i<n; i++)
                m[arr[i]]++;
            int twice_count = 0;
            // iterate through each element and increment the count (notice that every pair is counted twice)
            for(int i=0; i<n; i++){
                twice_count += m[k-arr[i]];

                // if (arr[i], arr[i]) pair satisfies the condition , then
                // we need to ensure that the count is decreased by one such that the 
                // (arr[i] , arr[i]) pair is not considered.
                if(k-arr[i] == arr[i]) twice_count--;
            }
            return twice_count/2;
        }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout<<ans<<"\n";
    }
    return 0;
}