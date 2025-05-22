#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int a,b;
           cin>>a>>b;
           int xorr=0;
           if(((a-1)%4)==0) xorr=a-1;
           if(((a-1)%4)==1) xorr=1;
           if(((a-1)%4)==2) xorr=a;
           if(((a-1)%4)==3) xorr=0;
           if(xorr==b) cout<<a<<"\n";
           else if((xorr^b)==a) cout<<a+2<<"\n";
           else cout<<a+1<<"\n";

        }
}