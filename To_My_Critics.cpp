#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a+b >= 10)
        cout<<"Yes"<<endl;
    else if(b+c >= 10) cout<<"Yes"<<endl;
    else if(c+a >= 10) cout<<"Yes"<<endl;
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