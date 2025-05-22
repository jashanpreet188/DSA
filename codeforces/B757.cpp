#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> a(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            vector<pair<int,int>> arr;
            for(int i=0;i<n;i++){
                arr.push_back({a[i],i});
            }
            sort(arr.begin(),arr.end(),[](pair<int,int>& a,pair<int,int> &b){
                return a.first>b.first;
            });
            long long sum=0;
            int cnt=1;
            // vector<int> pos;
            vector<int> pos(n,0);
            for(int i=0;i<n;i++){
                // pos.push_back(cnt);
                int ind=arr[i].second;
                if(i%2) pos[ind]=-1*cnt;
                else pos[ind]=cnt;
                sum+=(2*(long long)cnt*arr[i].first);
                if(i%2) cnt++;
            }
            cout<<sum<<"\n";
            cout<<"0 ";
            for(int i=0;i<n;i++){
                cout<<pos[i]<<" ";
            }
            cout<<"\n";
        }
}