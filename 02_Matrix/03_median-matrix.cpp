#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        vector<int> vec;
        int median;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                vec.push_back(matrix[i][j]);
            }
        }
        sort(vec.begin(), vec.end());
        if(vec.size() % 2 == 0){
            median = (vec[vec.size()/2] + vec[(vec.size()/2) -1]) / 2;
            return median;
        }else{
            median = vec[vec.size()/2];
            return median;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        cout<<ob.median(matrix, r, c)<<endl;
    }
    return 0;
}