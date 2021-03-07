#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<vector<int>> ans(N, vector<int>(N));
        vector<int> prev_ans;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                prev_ans.push_back(Mat[i][j]);
            }
        }
        int cnt=prev_ans.size() - 1;
        sort(prev_ans.begin(), prev_ans.end());
        for(int i=N-1; i>=0; i--){
            for(int j=N-1; j>=0; j--){
                ans[i][j] = prev_ans[cnt];
                cnt--;
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> v(N, vector<int>(N));
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cin>>v[i][j];
            }
        }
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<v[i][j];
            }
            cout<<"\n";
        }
    }

    return 0;
}