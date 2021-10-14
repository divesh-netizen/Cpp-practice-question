#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    vector<vector<int>> g;
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d){
        vector<vector<int>> ans;
        g = vector<vector<int>> (n+1);
        for(int i=0; i<p; i++){
            g[a[i]].push_back(b[i]);
        }
        map<int, int> mp;
        for(int i=0; i<p; i++){
            mp[b[i]] = d[i];
        }
        bool as[n] = {0};
        bool bs[n] = {0};
        for(int i=0; i<n; i++){
            as[b[i] - 1] = 1;
            bs[a[i] - 1] = 1;
        }
        for(int i=0; i<n; i++){
            if(as[i] == 0){
                as[i] = 1;
                int temp = g[i+1][0], k = mp[temp];
                while(bs[temp-1] != 0){
                    temp = g[temp][0];
                    if(k>mp[temp]) k = mp[temp];
                }
                ans.push_back({i+1, temp, k});
            }
        }
        return ans;
    }
};

int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}