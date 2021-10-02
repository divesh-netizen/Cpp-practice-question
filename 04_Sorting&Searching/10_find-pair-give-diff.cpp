#include<bits/stdc++.h>
using namespace std; 

bool findPair(int arr[], int size, int n){
    unordered_map<int, int> mp;
    for(int i=0; i<size; i++) mp[arr[i]] = 1;
    bool f = false;
    for(int i=0; i<size; i++){
        if(mp[arr[i]+n]){
            f = true;
            break;
        }
    }
    return f;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
