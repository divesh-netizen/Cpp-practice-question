#include<bits/stdc++.h>
#include<vector>

using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(nums[i] == nums[j]){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};


int main(){
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(6);
    v1.push_back(5);

    Solution sol;
    cout<<sol.findDuplicate(v1)<<endl;

    return 0;
}