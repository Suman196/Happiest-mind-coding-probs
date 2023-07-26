#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n,i,m;
    int a[45];
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    m = *max_element(a,a+3);
    int j=0;
    if(m%2==0){
        while(pow(2,j)<=m){
        cout<<pow(2,j)<<" ";
        j++;
    }
    }
    else{
        while(pow(2,j)<m){
        cout<<pow(2,j)<<" ";
        j++;
        }
    }
    
    return 0;
    
    
    
}
