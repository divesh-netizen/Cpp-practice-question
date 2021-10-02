#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        map<int, int>::iterator itr;
        for(itr=mp.begin(); itr!=mp.end(); itr++){
            if(itr->second == 1){
                ans.push_back(itr->first);
            }
        }
        return ans;
    }
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
} 