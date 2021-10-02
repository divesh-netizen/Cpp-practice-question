#include<bits/stdc++.h>
using namespace std;

#define M 4
#define N 5

void printCommonElements(int mat[M][N]){
    unordered_map<int, int> mp;
    for(int j=0; j<N; j++)
        mp[mat[0][j]] = 1;
    // Traverse the matrix
    for(int i=1; i<M; i++){
        for(int j=0; j<N; j++){
            // if the element is present in the map and is not 
            // duplicate in current row.
            if(mp[mat[i][j]] == i){
                // we increment count of the element in map by one.
                mp[mat[i][j]] = i+1;
                // if this is the last row
                if(i == M-1)
                    cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    int mat[M][N] = 
    {
        {1, 2, 1, 4, 8}, 
        {3, 7, 8, 5, 1}, 
        {8, 7, 7, 3, 1}, 
        {8, 1, 2, 7, 9},
    };

    printCommonElements(mat);
}
