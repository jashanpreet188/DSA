#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
           int n;
           cin>>n;
           int p;
           cin>>p;
           vector<int> a(n,0);
           vector<int> b(n,0);
           for(int i=0;i<n;i++){
                cin>>a[i];
           }
           for(int i=0;i<n;i++){
            cin>>b[i];
           }
           vector<pair<int,int>> arr;
           for(int i=0;i<n;i++){
            arr.push_back({b[i],a[i]});
           }
           sort(arr.begin(),arr.end());
           queue<pair<int,int>> q;
           q.push(arr[0]);
           long long cost=p;
           int i=1;
           while(i<n){
            auto node=q.front();
            q.pop();
            long long iskicost=node.first;
            if(iskicost>=p){
                cost+=(long long)p*(n-i);
                break;
            }
            int freq=node.second;
            while(i<n && freq>0){
                q.push(arr[i]);
                cost+=iskicost;
                i++;
                freq--;
            }

           }
           cout<<cost<<"\n";
          

        }
}
