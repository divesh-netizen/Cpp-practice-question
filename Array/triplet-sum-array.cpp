#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool find3Numbers(int A[], int arr_size, int sum){
            int l, r;
            sort(A, A+arr_size);
            for(int i=0; i<arr_size; i++){
                l = i+1;
                r = arr_size-1;
                while(l<r){
                    if(A[i] + A[l] + A[r] == sum)
                        return true;
                    else if(A[i] +A[l] + A[r] < sum)
                        l++;
                    else
                        r--;
                }
            }
            return false;
        }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N, sum;
        cin>>N>>sum;
        int i, A[N];
        for(i=0; i<N; i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.find3Numbers(A, N, sum)<<endl;
    }
    return 0;
}