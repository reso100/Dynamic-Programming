//given a array of integers your task is to find the longest increasing subsequence with maimum sum.
//Also print out the sum.





#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1={4,6,1,3,8,4,6};
    int n=7;
    int sum[7];
    int pos[7];
    for(int i=0;i<n;i++){
        sum[i]=v1[i];
        pos[i]=i;
    }
    int a,b;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            a=v1[j];
            b=v1[i];
            if(b>a){
               if(sum[i]>v1[i]+sum[j]){
                   
               }
               else{
                   sum[i]=v1[i]+sum[j];
                   pos[i]=j;
               }
            }
        }
    }
    int ans=-100;
    int in=0;
    for(int i=0;i<n;i++){
        if(sum[i]>ans){
            ans=sum[i];
            in=i;
        }
    }
    cout<<ans<<endl;
    set<int> v2;
    int temp;
    int count=0;
    while(1){
        temp=v1[in];
        count++;
        v2.insert(temp);
        in=pos[in];
        int xn=v2.size();
        if(count!=xn){
            for(auto jk: v2){
                cout<<jk<<" ";
            }
            break;
        }
    }
    
    
    
    
}
