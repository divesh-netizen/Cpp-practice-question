#include <bits/stdc++.h>
using namespace std;

void isSubArray(int arr1[], int arr2[], int m, int n){
    unordered_set<int> set1;
    string flag = "Yes";
    for(int i=0; i<m; i++){
        set1.insert(arr1[i]);
    }
    for(int i=0; i<n; i++){
        if(set1.find(arr2[i]) == set1.end())
            flag = "No";
    }
    cout<<flag<<endl;
}

int main() {
	//code
	int t,m,n;
	cin>>t;
	while(t--)
	{
    	cin>>m>>n;
    	int arr1[m],arr2[n];
    	for(int i=0;i<m;i++)
    	{
    	    cin>>arr1[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    cin>>arr2[i];
    	}
    	isSubArray(arr1, arr2, m ,n);

	}
	return 0;
}