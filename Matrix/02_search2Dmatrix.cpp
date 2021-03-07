#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        unordered_set<int> set1;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                set1.insert(matrix[i][j]);
            }
        }
        if(set1.find(target) != set1.end())
                return 1;
        else
            return 0;
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
        int target;
        cin>>target;
        Solution ob;
        bool result = ob.searchMatrix(matrix, target);
        cout<<result;
        cout<<endl;
    }
    return 0;
}