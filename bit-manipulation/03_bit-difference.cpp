#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    int countBitsFlip(int a, int b){
        int n = a^b;
        int cnt = 0;
        while(n){
            int bit = n&1;
            if(bit) cnt++;
            n = n>>1;
        }
        return cnt;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		int a,b;
		cin>>a>>b;

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
} 