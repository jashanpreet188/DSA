#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     int main(){
    
        int t;
        cin>>t;
        while(t--){
            int w,h;
            cin>>w>>h;
            int k1;
            cin>>k1;
            vector<int> bottom(k1,0);
            for(int i=0;i<k1;i++){
                cin>>bottom[i];
            }
            int k2;
            cin>>k2;
            vector<int> top(k2,0);
            for(int i=0;i<k2;i++){
                cin>>top[i];
            }
            int k3;
            cin>>k3;
            vector<int> left(k3,0);
            for(int i=0;i<k3;i++){
                cin>>left[i];
            }
            int k4;
            cin>>k4;
            vector<int> right(k4,0);
            for(int i=0;i<k4;i++){
                cin>>right[i];
            }
            // int width=bottom[k1-1]-bottom[0];
            long long maxi=0;
            // cout<<bottom[k1-1]-bottom[0]<<" ";
            // cout<<top[k2-1]-top[0]<<" ";
           maxi=max({(bottom[k1-1]-bottom[0])*(long long)h,(long long)h*(top[k2-1]-top[0]),(long long)w*(left[k3-1]-left[0]),(long long)w*(right[k4-1]-right[0])});
           cout<<maxi<<"\n";
        }

}