#include<bits/stdc++.h>
using namespace std;

int buyMaxProducts(int n, int k, int price[]){
    vector<pair<int, int>> v;

    for(int i=0; i<n; i++){
        v.push_back(make_pair(price[i], i+1));
    }
    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<n; ++i){
        ans += min(v[i].second, k/v[i].first);
        k -= v[i].first * min(v[i].second, (k/v[i].first));
    }
    return ans;
}

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<buyMaxProducts(n, k, a)<<endl;
    return 0;
}