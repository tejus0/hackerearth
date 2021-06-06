#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool prime[100000001];
void seive(){
    ll m=100000001;
    memset(prime,true, sizeof(prime));
    prime[0]=prime[1]=false;
    for (ll i=4;i<=m;i+=2){
        prime[i]=false;
    }
    for (ll i=3;i*i<=m;i+=2){
        if (prime[i]){
            for (ll j=i*i;j<=m;j+=2*i){
                prime[j]=false;
            }
        }
    }
}

int main(){
   ll t,n;
   seive();
   cin>>t;
   while(t--){
       ll cnt=0;
       cin>>n;
   for (ll i=0;i<n;i++){
       ll a;
       cin>>a;
       if (prime[a])
       cnt++;
   }
   cout<<cnt<<endl;
   } 
}