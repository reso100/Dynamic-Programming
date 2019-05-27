#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n,m;
    n=s1.length();
    m=s2.length();
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            dp[i][j]=0;
        }
    }
    int mi=-100;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            mi=max(mi,dp[i][j]);
            //cout<<dp[][]<<""
        }
    }
    cout<<mi<<endl;
    
}
