#include<bits/stdc++.h>
using namespace std;

bool subArrayExist(int arr[], int n){
    unordered_map<int, bool> sumMap;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum ==0 || sumMap[sum] == true)
            return true;
        sumMap[sum] = true;
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(subArrayExist(arr, n))
            cout<<"yes \n";
        else 
            cout<<"No \n";
    }
    return 0;
}
