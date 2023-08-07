    #include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
   long long n;
   cin>>n;
 
   long long  arr[n] ,eSum = 0, oSum = 0;
   
   for(int i=0;i<n;i++){
    cin>>arr[i];
   
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
    
    if(i == 0 || arr[i]%2 == 0) eSum += arr[i];
    else oSum += arr[i];
   }
 
   if((eSum%2 == 0 && oSum%2 == 0) || (eSum%2 != 0 && oSum%2 != 0)) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
 
 
 
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}