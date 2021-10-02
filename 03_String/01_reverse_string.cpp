#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0; i<s.size()/2; i++){
            swap(s[i], s[s.size()-i-1]);
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s;
        vector<char> vec;
        for(int i=0; i<n; i++){
            cin>>s;
            vec.push_back(s);

        }
        Solution ob;
        ob.reverseString(vec);
    }
    return 0;
}