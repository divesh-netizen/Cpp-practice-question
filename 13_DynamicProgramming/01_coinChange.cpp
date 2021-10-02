#include <iostream>
#include <string.h>
using namespace std;


int getCount(int S[], int m, int n)
{
    long long int table[n+1];
        memset(table, 0, sizeof(table));
        table[0] = 1;
        for(int i=0; i<m; i++)
            for(int j=S[i]; j<=n; j++)
                table[j] += table[j-S[i]];
     
        return table[n];
    
}

int main() {
	
	
int coins[]={1, 2, 3}, sum=4, n=3;

cout<<getCount(coins, n, sum);
	

}