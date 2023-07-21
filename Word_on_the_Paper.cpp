#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
   vector<string> str(8);
   for(int i=0;i<8;i++){
    cin>>str[i];
   }
    string ans = "";
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(str[i][j] != '.') ans += str[i][j];
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