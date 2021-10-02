#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
        long long cnt = 0;
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++){
            int j=i+1;
            int k = n-1;
            while(j<k){
                int s = arr[i] + arr[j] + arr[k];
                if(s<sum){
                    cnt += (k-j);
                    j++;
                }else k--;
            }
        }
        return cnt;
	}
};


int main() {
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	    cout << "\n";
    }
    return 0;
}