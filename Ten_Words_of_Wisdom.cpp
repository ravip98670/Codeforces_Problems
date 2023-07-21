#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
   int n;
   cin>>n;
 
   int a[n];
   int b[n];
 
   for(int i=0;i<n;i++){
    cin>>a[i];
    cin>>b[i];
   }
 
   int t[n] = {0};
   int ind = 0;
   for(int i=0;i<n;i++){
    if(a[i] <= 10){
        t[i] = b[i];
    }
   }
   int q = 0;
   int ans = 0;
   for(int i=0;i<n;i++){
    if(q < t[i]){
        ans = i+1;
        q = t[i];
    }
   }
   cout<<ans<<endl;
 
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}