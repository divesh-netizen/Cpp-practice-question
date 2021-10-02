#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int largest_p(int n){
        int x =0;
        while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    int countSetBits(int n){
        if(n==0) return 0;
          int x = largest_p(n);

          int btill2x = x*(1<<(x-1));
          int mxb2xton = n-(1<<x)+1;
          int rest = n-(1<<x);
          int ans = btill2x + mxb2xton + countSetBits(rest);
          return ans;
    }
};


int main()
{
	 int t;
	 cin>>t;
	 while(t--) 
	 {
	       int n;
	       cin>>n;
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;
	  }
	  return 0;
}