#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define v 4
#define INF 10000
int graph[v][v] = { {0,   5,  INF, 10}, 
                        {INF, 0,   3, INF}, 
                        {INF, INF, 0,   1}, 
                        {INF, INF, INF, 0} 
                      }; 
void solve(){
    int v1[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            v1[i][j]=graph[i][j];
        }
    }
    int temp;
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                temp=min(v1[i][j],v1[i][k]+v1[k][j]);
                v1[i][j]=temp;
            }
        }
    }
    for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
          cout<<v1[i][j]<<" ";
      }
      cout<<endl;
    }
}
int main(){
    solve();
    
}
