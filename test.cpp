#include <bits/stdc++.h>
using namespace std;
void function1(int num, char *param[]){
    sort(param, param+num);
    char *ans = "c";
    int i=1;
    while(i<num){
        if(param[i] != param[i-1])
            ans = param[i-1];
    }
    if(ans == "-1")
        ans = param[num-1];
    cout<<ans;
 }
int main()
{
  int n;
  cin>>n;
  char *a[n];
  for(int i=0; i<n; i++)
    cin>>a[i];
  function1(n, a);
  return 0;
}