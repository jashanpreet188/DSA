#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n,k,a,b;
           cin>>n>>k>>a>>b;
           long long ds=LLONG_MAX;
           long long dd=LLONG_MAX;
           if(a<=k){
                ds=0;
                
           }
           if(b<=k){
            dd=0;
           }
           vector<pair<int,int>> arr;
           for(int i=0;i<n;i++){
                int x,y;
                cin>>x>>y;
                arr.push_back({x,y});
           }
           long long x1=arr[a-1].first;
           long long y1=arr[a-1].second;
           long long x2=arr[b-1].first;
           long long y2=arr[b-1].second;
           for(int i=0;i<k;i++){
                long long disa=abs(x1-arr[i].first)+abs(y1-arr[i].second);
                ds=min(ds,disa);
                long long disb=abs(x2-arr[i].first)+abs(y2-arr[i].second);
                dd=min(dd,disb);
           }

           long long dis=abs(x1-x2)+abs(y1-y2);
        //    cout<<dis<<" ";
           long long ans=dis;
          if(ds!=LLONG_MAX || dd!=LLONG_MAX) ans=min(dis,(ds+dd));
           cout<<ans<<"\n";
          
          
        }
}
