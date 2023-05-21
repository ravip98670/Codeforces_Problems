#include <bits/stdc++.h>
using namespace std;
 
void solution(){
    
    int size;
    cin>>size;
 
    int jada;
    cin>>jada;
 
    vector<int> firstArr(size,0);
    for(int i=0;i<size;i++){
        cin>>firstArr[i];
    }
 
    vector<int> temp = firstArr;
    sort(firstArr.begin(),firstArr.end());
 
    vector<int> secondArr(size,0);
    for(int i=0;i<size;i++){
        cin>>secondArr[i];
    }
    sort(secondArr.begin(),secondArr.end());
 
    map<int,vector<int>> mp;
    for(int i=0;i<size;i++){
        int t = secondArr[i];
        mp[firstArr[i]].push_back(t);
    }
 
    for(int i=0;i<size;i++){
        auto itr = mp.find(temp[i]);
        cout<<itr->second[mp[temp[i]].size()-1]<<" ";
        mp[temp[i]].pop_back();
    }
    cout<<endl;
 
    
}
int main() {
	int test;
    cin>>test;
    while(test--){
        solution();
    }
    return 0;
}

