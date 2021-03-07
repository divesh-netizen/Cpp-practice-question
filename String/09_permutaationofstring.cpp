#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector<string>find_permutation(string S)
        {
            vector<string>res;
            // sort the string in lexicographically order
            sort(S.begin(), S.end());
            do
            {
                // keep adding while there is next permutation
                res.push_back(S);
            }while(next_permutation(S.begin(), S.end()));
            return res;
        }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for(auto i: ans)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}