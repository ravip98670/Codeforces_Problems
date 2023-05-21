#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    long long count = 0;
    long long siza;
    cin>>siza;
    
    string str = "";
    cin>>str;
    
    map<string,int> temp;
    for(int i=0;i<siza-1;i++){
        string s ="";
        s = str[i];
        s += str[i+1];
        temp[s]++;
    }
    cout<<temp.size()<<endl;
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}