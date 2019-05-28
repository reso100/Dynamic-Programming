#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int solve(string s,int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return 1;
    }
    if(s[i]==s[j]){
        return 2+solve(s,i+1,j-1);
    }
    else{
        return max(solve(s,i+1,j),solve(s,i,j-1));
    }
}
int main(){
    string s="ABBDCACB";
    int x1=s.length();
    int ans=solve(s,0,x1-1);
    cout<<ans<<endl;
}
