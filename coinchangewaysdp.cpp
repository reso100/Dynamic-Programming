#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> m1;
int coun( int S[], int m, int n ) 
{ 
    string key=to_string(m)+to_string(n);
	if (n == 0) 
		return 1; 
	if (n < 0) 
		return 0; 
	if (m <=0 && n >= 1) 
		return 0; 
	if(m1.find(key)==m1.end()){
	    m1[key]=coun( S, m - 1, n ) + coun( S, m, n-S[m-1] ); 
	}
	return m1[key];
} 
int main() 
{ 
	int i, j; 
	int arr[] = {1, 2, 3}; 
	int m = sizeof(arr)/sizeof(arr[0]); 
	printf("%d ", coun(arr, m, 4)); 
	getchar(); 
	return 0; 
} 
