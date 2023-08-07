#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
   string n;
   cin>>n;
 
    
  
 
    int carry = 0;
   int ind = 0;
   bool flag = false;
   for(int i=0;i<n.size();i++){
        if(n[i] >= '5' && !flag){
            n[i] = '0';
            ind = i;
            flag = true;
            carry = 1;
        }
        else if(flag){
            n[i] = '0';
        }
 
    }
    for(int i = ind-1;i>=0;i--){
        // if(n[i] == '9'){
        //     n[i] = '0';
        //     carry = 1;
        // }
        // else{
        //     n[i] += carry;
        //     carry = 0;
        // }
 
        int t = n[i]-'0';
        t += carry;
        if(t >= 5){
            n[i] = '0';
 
        }
        else{
            n[i]=t+'0';
            carry = 0;
        }
    }
    string st = "";
    
    if(carry == 1){
        char ch = '1';
        st += ch;
        
 
    } 
    st += n;
   
    cout<<st<<endl;
 
 
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}