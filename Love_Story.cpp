#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    long long count = 0;
    string str = "codeforces";
    string tmp;
    cin>>tmp;
    
    for(int i=0;i<tmp.size();i++){
        if(str[i] != tmp[i])
            count++;
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