#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    // code here
        int gap = ((m+n)%2 == 1) ? (m+n+1)/2 : (m+n)/2;
        for(int i=gap; i>=1;){
            int p=0;
            int q = p+i;
            while(q<(m+n)){
                if(q<m){
                    if(a[p] > a[q]) swap(a[p], a[q]);
                }else{
                    if(p<m){
                        if(a[p]>b[q-m])
                            swap(a[p], b[q-m]);
                    }else if(b[p-m] > b[q-m]){
                        swap(b[p-m], b[q-m]);
                    }
                }
                p++;
                q++;
            }
            i = (i%2==1 && i!=1) ? (i+1)/2 : i/2;
        }
	}          
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} 