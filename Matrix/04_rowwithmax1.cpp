#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int rowWithMax1s(vector<vector<int>> arr, int n, int m){
            int r=0; 
            int c=m-1;
            int max_row_index = -1;
            // starting from top right corner go left if you encounter 1 do down
            // if you encounter 0
            while(r<n && c>=0){
                if(arr[r][c] == 1){
                    max_row_index = r;
                    c--;
                }else{
                    r++;
                }
            }
            return max_row_index;
        }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n. m);
        cout<<ans<<" ";
    }
    return 0;

}