#include<bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x){
    int curr_max = 0, min_len = n+1;
    int start=0, end=0;
    while(end<n){
        while(curr_max<=x && end<n)
            curr_max+=arr[end++];
        while(curr_max>x && start<n){
            if(end-start < min_len)
                min_len = end-start;
            curr_max -= arr[start++];
        }
    }
    return min_len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<sb(a,n,x)<<endl;
    }
    return 0;
}