#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    bool isPowerofTwo(long long n){
        if(n==0) return false;
        if(n==1) return true;
        if(n&(n-1)) return false;
        return true;
    }
};


int main()
{

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}