#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
  
    cin>>n>>m;
    int x;
    int dp[n][m];
    int v2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            v2[i][j]=x;
        }
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   if(i==0 && j==0){
                       dp[0][0]=v2[0][0];
                   }
                   if(i==0 && j!=0){
                       dp[i][j]=v2[i][j]+dp[i][j-1];
                   }
                   if(i!=0 && j!=0){
                       dp[i][j]=v2[i][j]+min(dp[i][j-1],dp[i-1][j]);
                   }
                   if(j==0 && i!=0){
                       dp[i][j]=v2[i][j]+dp[i-1][j];
                   }
                   cout<<dp[i][j]<<" ";
            }
         return dp[n-1][m-1];
    }
}
