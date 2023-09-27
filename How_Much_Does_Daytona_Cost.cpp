#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    int a,b;
    cin>>a>>b;
    
    int arr[a];
    bool found = false;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i] == b) found = true;
    }
    if(!found) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
 
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        
        solution();
    }
    return 0;
}