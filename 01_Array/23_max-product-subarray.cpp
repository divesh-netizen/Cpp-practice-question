#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long maxProduct(int *arr, int n){
            long long minval = arr[0];
            long long maxval = arr[0];
            long long maxproduct = arr[0];
            for(int i=1; i< n; i++){
                if(arr[i] < 0) swap(maxval, minval);

                maxval = max((long long)arr[i], maxval*arr[i]);
                minval = min((long long)arr[i], minval*arr[i]);

                maxproduct = max(maxproduct, maxval);
            }
            return maxproduct;
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout<<ans<<" \n";
    }
    return 0;
}