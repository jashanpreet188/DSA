#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           int q;
           cin>>q;
           vector<long long> a(n,0);
           
           for(int i=0;i<n;i++){
            cin>>a[i];
           }
           vector<int> b(q,0);
           for(int i=0;i<q;i++){
            cin>>b[i];
           }
           int limit=30;
           for(int i=0;i<q;i++){
            int x=b[i];
            if(x<=limit){
                limit=x-1;
                int div=1<<x;
                for(int i=0;i<n;i++){
                    if((a[i]%div)==0){
                        a[i]+=(1<<(x-1));
                    }
                }
            }
            
            if(limit==0) break;
           }
           for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
           }
           cout<<"\n";

        }
}
