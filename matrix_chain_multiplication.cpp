
//MATRIX CHAIN MULTIPLICATION CODE IN C++.


#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int solve(vector<int> p,int n){
    int dp[n][n];
    for(int i=1;i<n;i++){
        dp[i][i]=0;
    }
    int cost,j;
    for(int len=2;len<n;len++){
        for(int i=1;i<n-len+1;i++){
            j=i+len-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++){
                cost=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
                dp[i][j]=min(dp[i][j],cost);
            }
        }
    }
    return dp[1][n-1];
}

int main(){
    vector<int> v1 = {1, 2, 3, 4}; 
    int ans=solve(v1,4);
    cout<<ans<<endl;
    return 0;

}
