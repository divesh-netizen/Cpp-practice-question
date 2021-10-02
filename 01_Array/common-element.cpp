#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> commonelements(int A[], int B[], int C[], int n1, int n2, int n3){

            vector<int> duplicate;
            map<int, int> freq1, freq2, freq3;
            
            for(int i=0; i<n1; i++){
                freq1[A[i]]++;
            }
            for(int i=0; i<n2; i++){
                freq2[B[i]]++;
            }
            for(int i=0; i<n3; i++){
                freq3[C[i]]++;
            }
            map<int,int>:: iterator it;
            for(it = freq1.begin(); it != freq1.end(); it++){
                if((freq2.find(it->first) != freq2.end()) && (freq3.find(it->first) != freq3.end()))
                    duplicate.push_back(it->first);
            }
            
            return duplicate;
        }
};


int main(){

    int t;
    cin>>t;
    while(t--){
        int n1, n2, n3;
        cin>>n1>>n2>>n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for(int i=0; i<n1; i++) cin>>A[i];
        for(int i=0; i<n1; i++) cin>>B[i];
        for(int i=0; i<n1; i++) cin>>C[i];

        Solution ob;
        vector <int> res = ob.commonelements(A, B, C, n1, n2, n3);
        if(res.size() == 0)
            cout<<-1;
        for(int i=0; i<res.size(); i++)
            cout<<res[i] << " ";
        cout<<endl;

    }


    return 0;
}