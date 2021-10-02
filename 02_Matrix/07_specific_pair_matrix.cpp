// A simple solution would be to apply Brute-Force. For all 
// values mat(a, b) in the matrix, we find mat(c, d) that 
// has maximum value such that c > a and d > b and keeps on 
// updating maximum value found so far. We finally return 
// the maximum value.

#include<bits/stdc++.h>
using namespace std;
#define N 5

int findMaxValue(int mat[][N]){
    int maxVal = INT_MIN;
    // Consider all possible pairs mat[a][b] and mat[d][e]
    for(int a=0; a<N-1; a++)
    for(int b=0; b< N-1; b++)
        for(int d=a+1; d<N; d++)
        for(int e=b+1; e<N; e++)
            if(maxVal < (mat[d][e] - mat[a][b]))
                maxVal = mat[d][e] - mat[a][b];
        return maxVal;
}

int main(){
    int mat[N][N] = {
                { 1, 2, -1, -4, -20 }, 
                { -8, -3, 4, 2, 1 }, 
                { 3, 8, 6, 1, 3 }, 
                { -4, -1, 1, 7, -6 }, 
                { 0, -4, 10, -5, 1 }
                };
    cout<<"Maximum value is "<< findMaxValue(mat);
    return 0;
}