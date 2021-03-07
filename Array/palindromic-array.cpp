#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int PalinArray(int a[], int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<PalinArray(a, n)<<endl;
    }
    return 0;
}

int palinArray(int a[], int n){
    int pass = 1; 
    for(int i=0; i<n; i++){
        int temp1 = a[i];
        int temp2 = 0;
        int rem;
        while(temp1){
            rem = temp1%10;
            temp2 = temp2 *10 + rem;
            temp1 = temp1/10;
        }
        if(temp2!=a[i]){
            pass = 0;
            break;
        }
    }
    if(pass == 1)
        return 1;
    else
        return 0;
}