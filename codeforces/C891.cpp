#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
     int main(){
        int t;
        cin>>t;
        while(t--){
           long long n;
           cin>>n;
           long long k,b,s;
           cin>>k>>b>>s;
           long long maxi=b*k;
           maxi+=n*(k-1);
           long long mini=b*k;
           if(s<mini || s>maxi){
                cout<<"-1\n";
                continue;
           }
           long long sum=b*k;
           long long rem=s-b*k;
           vector<long long> ans(n,0);
           if(rem-(k-1)>=0) {ans[0]=(b*k+k-1);rem-=(k-1);}
           else {ans[0]=s;rem=0;}
           for(long long i=1;i<n;i++){
             if((rem-(k-1))>=0) {ans[i]=k-1;rem-=(k-1);}
             else{ ans[i]=rem; rem=0;}
             
           }
           for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
           }
           cout<<"\n";
           
         }
         return 0;
        }
