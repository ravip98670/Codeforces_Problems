#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    long long count = 0;
    long long siza;
    cin>>siza;
    
    int arr[siza];
    for(int i=0;i<siza;i++){
        cin>>arr[i];
    }
    
    long long temp = 0;
    for(int i=0;i<siza;i++){
        if(arr[i] == 0){
            temp++;
            count = max(count,temp);
        }else{
            temp = 0;
        }
    }
    cout<<count<<endl;
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}