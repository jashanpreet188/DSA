#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           int k;
           cin>>n>>k;
            vector<int> a(n,0);
            vector<int> b(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
                
            }
            for(int i=0;i<n;i++){
                cin>>b[i];
            }
            long long maxi=a[0];
            long long sum=0;
            long long bb=0;
            for(int i=0;i<min(n,k);i++){
                sum+=a[i];
                bb=max(bb,(long long)b[i]);
                // cout<<sum<<" "<<bb<<"\n";
                maxi=max(maxi,sum+(long long)(k-i-1)*bb);
            }
            cout<<maxi<<"\n";

        }
}