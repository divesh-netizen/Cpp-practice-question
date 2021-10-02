#include<bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int n)
{
    unordered_map <int,bool> m;
    
    // storing the occurrence of the array elements
    for (int i = 0; i < n; i++) m[arr[i]] = true;
    
    int res = 1, cur, elt;
    
    for (int i = 0; i < n; i++)
    {
        // if the current element has already been considered, we skip it.
        if (!m[arr[i]]) continue;
        
        cur = 1;
        elt = arr[i] + 1;
        
        // counting the consecutive elements just before arr[i]
        while (m[elt])
        {
            cur++;
            // marking it false so that we do not come to the same element agai
            m[elt] = false;
            elt++;
        }
        
        elt = arr[i] - 1;
        
        // counting the consectutive elements just after arr[i]
        while (m[elt])
        {
            cur++;
            // marking it false so that we do not come to the same element agai
            m[elt] = false;
            elt--;
        }
        
        // storing the max count
        res = max (res, cur);
    }
    return res;
}