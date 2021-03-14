#include<bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B) {
    //code here
    int size = A.size();
    if(size == 0) return true;
    
    for(int i=1; i<= size; i++){
        if(find(B.begin(), B.end(), A.substr(0,i)) != B.end() && wordBreak(A.substr(i, size-i), B))
            return 1;
    }
    return 0;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0; i<n; i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
    return 0;
}