#include<iostream>
//lenght of longest common repeating subsequence.
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int solve(string s,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(s[m-1]==s[n-1] && m!=n){
        return 1+solve(s,m-1,n-1);
    }
    else{
        return max(solve(s,m,n-1),solve(s,m-1,n));
    }
}
int main(){
    string ans="atactcgga";
    int x1=ans.length();
    int gb=solve(ans,x1,x1);
    cout<<gb<<endl;
    
}
