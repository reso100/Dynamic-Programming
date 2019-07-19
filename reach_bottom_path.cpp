#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
unordered_map<string,int> m1;
int solve(int n,int m){
    if(n==0 || m==0){
        return 1;
    }
    string key=to_string(n)+"|"+to_string(m);
    if(m1.find(key)==m1.end()){
        m1[key]=solve(n,m-1)+solve(n-1,m);
    }
    return m1[key];
}
int main(){
    int n=3;
    int m=6;
    int ans=solve(n,m);
    cout<<ans<<endl;
    
}
