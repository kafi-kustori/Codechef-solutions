#include <bits/stdc++.h>
using namespace std;
int main(){
  int t ;
  cin>>t;
  while(t--){
   double n ,x ;
   cin>>n>>x;
   int ans = ceil( (n*x)/4);
   cout<<ans<<endl;
  }
}