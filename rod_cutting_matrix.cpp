#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int v1[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int n=8;
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        dp[1][i]=i;
        dp[i][0]=0;
    }
    int x;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=i){
                dp[i][j]=max(dp[i-1][j],v1[i-1]+dp[i][j-i]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][n]<<endl;
    
}
