#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           int c;
           cin>>c;
           vector<int> a(n,0);
        //    vector<int> b(n,0);
           for(int i=0;i<n;i++){
                cin>>a[i];
           }
           vector<int> cost(n,0);
           for(int i=0;i<n;i++){
            cost[i]=a[i]+i+1;
            // cout<<cost[i];
           }
           sort(cost.begin(),cost.end());
           int cnt=0;
           long long sum=0;
           for(int i=0;i<n;i++){
            int add=sum+cost[i];
            // cout<<add<<" ";
            if(add>c) break;
            sum+=cost[i];
            cnt++;
           }
           cout<<cnt<<"\n";

        }
}
