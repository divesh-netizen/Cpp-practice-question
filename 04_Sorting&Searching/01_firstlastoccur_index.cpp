#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    // code here
    int init=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            init=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            last=i;
            break;
        }
    }
    return {init,last};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        int arr[n], i;
        for(i=0; i<n; i++)
            cin>>arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}