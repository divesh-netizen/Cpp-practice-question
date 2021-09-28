#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool only_one(long long n){
        if(n==0) return false;
        if(n==1) return true;
        if(n&(n-1)) return false;
        return true;
    }
    int findPosition(int n) {
        int cnt=0;
        if(only_one(n)){
            while(n){
                n = n>>1;
                cnt++;
            }
        }else{
            return -1;
        }
        return cnt;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}