#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           vector<int> arr(n,0);
           for(int i=0;i<n;i++){
            cin>>arr[i];
           }
           vector<pair<int,int>> a;
           for(int i=0;i<n;i++){
            a.push_back({arr[i],i});
           }
           sort(a.begin(),a.end(),[](pair<int,int> &a1,pair<int,int>& b){
            return a1.first>b.first;
           });
           vector<int> dp(n,0);
           int findd=a[0].second;
           dp[findd]=n-1;
           vector<long long> suff(n,0);
           suff[n-1]=a[n-1].first;
           for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+a[i].first;
           }
           for(int i=1;i<n;i++){
                int ind=a[i].second;
                long long sum=suff[i];
                if(suff[i]>=a[i-1].first){
                    dp[ind]=dp[a[i-1].second]-(n-i-1)+(n-i-1);
                }
                else{
                    dp[ind]=n-i-1;
                }
           }
           for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
           }
           cout<<"\n";


        }
}