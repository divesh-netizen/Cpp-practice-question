#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int maxProfit(vector<int>& prices){
            int minprice = INT_MAX;
            int maxprofit = 0;
            for(int i=0; i<prices.size(); i++){
                if(prices[i] < minprice)
                    minprice = prices[i];
                else if(prices[i] - minprice > maxprofit)
                    maxprofit = prices[i] - minprice;
            }
            return maxprofit;
        }
};



int main(){
    vector<int> v1;
    int no_of_day_data;
    cin>>no_of_day_data;
    for(int i=0; i<no_of_day_data; i++){
        int data;
        cin>>data;
        v1.push_back(data);
    }
    Solution ob;
    cout<<"maxprofit: "<<ob.maxProfit(v1);
}