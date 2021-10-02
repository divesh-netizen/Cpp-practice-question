#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int setBits(int N) {
        int cnt = 0;
        while(N){
            int bit = N&1;
            if(bit) cnt++;
            N = N>>1;
        }
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}