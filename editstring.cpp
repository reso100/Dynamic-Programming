#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
unordered_map<string,int> dp;
int solve(string s1,string s2,int m,int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    string key=to_string(m)+"|"+to_string(n);
    if(dp.find(key)==dp.end()){
        if(s1[m-1]==s2[n-1]){
            dp[key]=solve(s1,s2,m-1,n-1);
        }
        else{
            dp[key]= 1+min(min(solve(s1,s2,m,n-1),solve(s1,s2,m-1,n-1)),solve(s1,s2,m-1,n));
        }
    }
    return dp[key];
}
int main(){
    string s1="saturdayffffu";
    string s2="saturday";
    int m=s1.length();
    int n=s2.length();
    int ans=solve(s1,s2,m,n);
    cout<<ans<<endl;
    
    
}
