#include<bits/stdc++.h>
using namespace std;

// A O(n) solution that uses  table fact[] to calculate the Permutation Coefficient
int permutationCoeff(int n, int k)
{
	int fact[n + 1];
	fact[0] = 1;
	for(int i = 1; i <= n; i++)
	    fact[i] = i * fact[i - 1];
	return fact[n] / fact[n - k];
}

// A O(n) time and O(1) extra space solution to calculate the Permutation Coefficient
int PermutationCoeff(int n, int k)
{
    int P = 1;
    // Compute n*(n-1)*(n-2)....(n-k+1)
    for (int i = 0; i < k; i++)
        P *= (n-i) ;
 
    return P;
}

int main()
{
	int n = 10, k = 2;
	
	cout << "Value of P(" << n << ", "
		<< k << ") is "
		<< permutationCoeff(n, k);

	return 0;
}

