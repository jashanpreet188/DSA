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
           long long sum=0;
        //    vector<int> b(n,0);
        int mini=INT_MAX;
            // vector<int> arr(n,0);
            // long long sum=0;
           for(int i=0;i<n;i++){
                int m;
                cin>>m;
                int ind=-1;
                int iskamin=INT_MAX;
                vector<int> temp(m,0);
                for(int i=0;i<m;i++){
                    cin>>temp[i];
                    mini=min(mini,temp[i]);
                    if(temp[i]<iskamin){
                        iskamin=temp[i];
                        ind=i;
                    }
                }
                int min2=INT_MAX;
                for(int i=0;i<m;i++){
                    if(i==ind) continue;
                    min2=min(min2,temp[i]);
                }
                // cout<<min2<<" ";
                sum+=min2;
                a[i]=min2;
           }
        //    cout<<sum<<"\n";
           int inmese =INT_MAX;
           for(int i=0;i<n;i++){
            inmese=min(inmese,a[i]);
           }
           sum=sum-inmese+mini;
           cout<<sum<<"\n";
          
        }
}
