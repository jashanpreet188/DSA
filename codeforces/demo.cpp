#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;  
        long long maxi = k * b; // ullu ki pthi maxi k*b+(k-1) hoskta h
        vector<long long> arr;
        // arr.push_back(maxi); //budhu abhi dekhne de kitna add krna h [k*b,k*b+(k-1)] k beech m
        long long ele = 0;
        long long ele2 = k - 1;
        long long maxi2 = (n - 1) * (k - 1);
        // long long rem = s - maxi;
        // if(rem < ele || rem > maxi2) {
        //     cout << -1 << endl;
        //     continue;
        // }
        if(k*b > s || (maxi+maxi2)<s){
            cout<<"-1\n";
            continue;
        }
        //ab phla element [k*b,k*b+(k-1)] range m hoga
        long long rem=s-k*b ;
         if(rem-(k-1)>=0) {arr.push_back((b*k+k-1));rem-=(k-1);}
           else {arr.push_back(s);rem=0;}

        for(int i = 1; i < n; i++){
             if((rem-(k-1))>=0) {arr.push_back(k-1);rem-=(k-1);}
             else{ arr.push_back(rem); rem=0;}
        }
 
        // while(arr.size() < n){
        //     arr.push_back(0);
        // }
 
        for(auto &it : arr){
            cout << it << " ";
        }
        cout <<endl;
    }
}