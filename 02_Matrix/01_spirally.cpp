#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> spirallyTraverse(vector<vector<int>> a, int m, int n){
            int i, k=0,l=0;
            vector<int> ans;
            /*  k=starting row index
                m-ending row index
                l-starting column index
                n-ending column index
                i-iterator
            */
            
            while(k<m && l<n){
                // printing first row from the remaining index
                for (i=l; i<n; ++i){
                    ans.push_back(a[k][i]);
                }
                k++;
                // printing the last column from remaining column
                for(i=k; i<m; ++i){
                    ans.push_back(a[i][n-1]);
                }
                n--;
                // printing last row from remaining row
                if(k<m){
                    for(int i=n-1; i>=l; --i){
                        ans.push_back(a[m-1][i]);
                    }
                    m--;
                }
                // printing the first column from remaining column
                if(l<n){
                    for(i=m-1; i>=k; --i){
                        ans.push_back(a[i][l]);
                    }
                    l++;
                }
            }
            return ans;
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r);

        for(int i=0; i<r; i++){
            matrix[i].assign(c, 0);
            for(int j=0; j<c; j++){
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}