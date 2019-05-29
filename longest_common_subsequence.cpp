#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int solve(string x,string y,int a,int b){
    if(a==0 || b==0){
        return 0;
    }
    if(x[a-1]==y[b-1]){
        return 1+solve(x,y,a-1,b-1);
    }
    else{
        return max(solve(x,y,a,b-1),solve(x,y,a-1,b));
    }
}
int main(){
    string x,y;
    cin>>x>>y;
    int a,b;
    a=x.length();
    b=y.length();
    int ans=solve(x,y,a,b);
    cout<<ans<<endl;
}
