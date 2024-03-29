/*
               Starting with the name of almighty ALLAH 
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
            In the name of Allah, Most Gracious, Most Merciful             
                    লা ইলাহা ইল্লাল্লাহু মুহাম্মাদুর রাসুলুল্লাহ 
                        Author:  Tarek Rahman
                        Created: 18.07.2023 
                    United International University
                Practice is the only shortcut to improve  
*/
/* 
Problem Link :
https://codeforces.com/contest/1642/problem/C
*/
#include <bits/stdc++.h>
#include<vector>
#include<set>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   test            ll t;cin >> t;while(t--)
#define   pb              push_back
#define   pp              pop_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   checkmate       return 0;
#define   nl              "\n"
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   mod             1000000007
#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >=b; i--)
const long long int N     = (ll) 1e7+1;
const long long int M     = (ll) 1e9+5;
#define MAX                 200005
#define MOD                 1000003
#define eps                 1e-9
#define INF                 0x3f3f3f3f3f3f3f3f // 4,557,430,888,798,830,399
#define inf                 0x3f3f3f3f // 1,061,109,567
#define PI                  acos(-1.0)  // 3.1415926535897932
using namespace std;
void run(){
   ll n , k;
   cin >> n >> k;;
   ll ans = 0;
   vll a(n);
   FOR(i,0,n){
        cin >> a[i];
   }
   sort(all(a));
    FOR(i,0,n){
        if(a[i]!=-1){
            ll target=a[i]*k;
            ll found=-1;
            ll low=i+1,high=n-1;
            while(low<=high){
                ll mid=low+(high-low)/2;
                if(a[mid]==target){
                    found=mid;
                    high=mid-1;
                }
                if(a[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            if(found==-1){
                ans++;
            }    
            else{
                a[found]=-1;
            }
        }
    }
   cout << ans << nl;
}
int main(){
    Tarek
    test{
        run();
    }
    checkmate
}

