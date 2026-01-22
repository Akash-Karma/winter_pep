#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=50;
    vector<int> spf(n+1);
    for(int i=0;i<=n;i++) spf[i]=i;
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
    int prev=-1;
    while(n!=1){
        if(spf[n]!=prev) cout<<spf[n]<<" ";
        prev=spf[n];
        n/=spf[n];
    } 
}