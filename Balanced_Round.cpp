#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
   int n;
   cin>>n;
   int k;
   cin>>k;
 
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 
   sort(arr.begin(),arr.end());
 
   int count = 0;
   int ans = 0;
   for(int i=1;i<n;i++){
    if(arr[i]-arr[i-1] <= k){
        count++;
    }
    else{
        ans = max(ans,count);
        count = 0;
    }
   }
   ans = max(ans,count);
   cout<<arr.size()-ans-1<<endl;
 
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}