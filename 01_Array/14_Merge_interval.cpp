// Given an array of intervals where intervals[i] = [starti, endi], 
// merge all overlapping intervals, and return an array of the non-overlapping 
// intervals that cover all the intervals in the input.

 

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static bool sortIntervals(const vector<int> &a, const vector<int> &b){
            if(a[0]==b[0]) return a[1] < b[1];
            else return a[0]<b[0];
        }
        vector<vector<int>> merge(vector<vector<int>> &intervals){
            int n=intervals.size();
            vector<vector<int>> mergedInterval;
            if(n==0 || (n==1 && intervals.size() == 0)) return mergedInterval;
            sort(intervals.begin(), intervals.end(), sortIntervals);

            mergedInterval.push_back(intervals[0]);
            int index = 0;
            for(int i=1; i<n; i++){
                if(intervals[i][0] <= mergedInterval[index][1])
                    mergedInterval[index][1] = max(mergedInterval[index][1], intervals[i][1]);
                else{
                    mergedInterval.push_back(intervals[i]);
                    index++;
                }
            }
            return mergedInterval;
        }
};