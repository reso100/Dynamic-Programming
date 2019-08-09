#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int k=0;
    int l=0;
    int m=3;
    int n=6;
    int i;
    int dp[3][6] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } 
        
    };
    while(k<m && l<n){
        for(int i=l;i<n;i++){
            cout<<dp[k][i]<<" ";
        }
        k++;
        for(int i=k;i<m;i++){
            cout<<dp[i][n-1]<<" ";
        }
        n--;
        if(k<m){
            for(int i=n-1;i>=0;i--){
                cout<<dp[m-1][i]<<" ";
            }
            m--;
        }
        if(l<n){
            for(int i=m-1;i>=k;i--){
                cout<<dp[i][l]<<" ";
            }
            l++;
        }
    }
    
    
    
                    
}
