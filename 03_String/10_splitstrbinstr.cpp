#include<bits/stdc++.h>
using namespace std;

int maxSubStr(string str, int n){
    // to store the count of 0 and 1
    int count0 = 0, count1 = 0;
    // to store te count of maximum 
    // substring str can be devided into 
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '0'){
            count0++;
        }else{
            count1++;
        }
        if(count0==count1){
            cnt++;
        }
    }

    // It is not possible to split the string 
    if(count0!=count1){
        return -1;
    }
    return cnt;
}

int main(){
    string str = "010010101010101010101";
    int n = str.length();

    cout<<maxSubStr(str, n);
    return 0;
}