// Maximum profit by buying and selling a share at most twice
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int n){
    // create profit array and initialize it with zero.
    int* profit = new int[n];
    for(int i=0; i<n; i++)
        profit[i] = 0;
    // Get the maximum profit with only one transaction allowed.
    // after this loop, profit[i] contains maximum profit from
    // price[i...b-1] using atmost one transaction
    int max_price = price[n-1];
    for(int i=n-2; i>=0; i--){
        if(price[i] > max_price)
            max_price = price[i];
        // we can get profit[i] by taking maximum of :
        // a> previous maximum i.e.. profit[i+1]
        // b> profit by buying at price[i] and selling at max_price
        profit[i] = max(profit[i+1], max_price - price[i]);
    }
    // Get the maximum profit with two transaction allowed after 
    // this loop, profit[n-1] contains the result
    int min_price = price[0];
    for(int i=1; i<n; i++){
        if(price[i] < min_price)
            // minprice is min price in price[0....i]
            min_price = price[i];
        // maximum profit is maximum of :p
        // a> previous maximum, i.e, profit[i-1]
        // b> (Buy, Sell) at (minprice, price[i]) and add
        // profit of other trains. stored in profit[i]
        profit[i] = max(profit[i-1], profit[i]+(price[i] - min_price));
    }
    int result = profit[n-1];
    delete[] profit; // to avoid memory leak
    return result;
}

int main(){
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n= sizeof(price) / sizeof(price[0]);
    cout<<"Maximum Profit = "<<maxProfit(price, n);
    return 0;
}