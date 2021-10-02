#include<bits/stdc++.h>
using namespace std;

int my_counter = 0;

void merge(int a[], int p, int q, int r){
    int l = q-p+1;
    int a1[l];
    int l2 = r-q;
    int a2[l2];

    for(int i=0; i<l; i++){
        a1[i] = a[i+p];
    }
    for(int i=0; i<l2; i++){
        a2[i] = a[q+i+1];
    }
    int left = 0, right=0, k=p;
    while(left < l && right < l2){
        if(a1[left] <= a2[right]){
            a[k] = a1[left];
            left++;
        }else{
            a[k] = a2[right];
            right++;
            my_counter += (l-left);
        }
        k++;
    }
    while(left < l){
        a[k++] = a1[left++];
    }
    while(right<l2){
        a[k++] = a2[right++];
    }
}



void mergeSort(int a[], int p, int r){
    if(p < r){
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}


int inversionCount(int arr[], int N){
    mergeSort(arr, 0, N-1);
    int res = my_counter;
    my_counter = 0;
    return res;
}


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;

        int A[N];
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
        cout<<"ans: "<<inversionCount(A,N)<<endl;
    }
}