#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) {
        ll sum=0, counter=0;
         unordered_map<ll,ll>mp;
            for(int i=0;i<n;i++)
            {
                sum+=arr[i];
                if(sum==0) 
                {
                    counter++; 
                }

                if(mp.count(sum)!=0) 
                {
                   counter+=mp[sum]; 
                }
                mp[sum]++; 
            }
           return counter ;
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}