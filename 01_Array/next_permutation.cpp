// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void nextPermutation(vector<int> &nums){
            next_permutation(nums.begin(), nums.end());
        }
        void PrintVector(vector<int> &nums){
            int size = nums.size();
            for(int i=0; i<size; i++){
                cout<<nums[i]<<" ";
            }

        }
};

int main(){
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        v1.push_back(elem);
    }
    Solution ob;
    ob.nextPermutation(v1);
    ob.PrintVector(v1);

}