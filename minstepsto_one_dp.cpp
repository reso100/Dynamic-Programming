#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n=9;
int dp[12];
int solve(int x){
    if(x==1){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int x1=solve(x-1);
    if(x%2==0){
        x1=min(x1,solve(x/2));
    }
    if(x%3==0){
        x1=min(x1,solve(x/3));
    }
    dp[x]=1+x1;
    return dp[x];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int ans=solve(n);
    cout<<ans<<endl;
    
}
