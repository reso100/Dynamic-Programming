#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
unordered_map<string,int> m1;
int solve(int n,int k){
    if(k==1 || k==0){
        return k;
    }
    if(n==1){
        return k;
    }
    
    int mi=INT_MAX;
    int res;
    for(int x=1;x<=k;x++){
        string key=to_string(n-1)+ "|" + to_string(x-1);
        string key1=to_string(n)+ "|" + to_string(k-x);
        if(m1.find(key)==m1.end()){
             m1[key]=solve(n-1,x-1);
        }
        if(m1.find(key1)==m1.end()){
             m1[key1]=solve(n,k-x);
        }
        res=max(m1[key],m1[key1]);
        mi=min(res,mi);
    }
    return mi+1;
}
int main()
{
    int ans=solve(2,10);
    cout<<ans<<endl;
}
