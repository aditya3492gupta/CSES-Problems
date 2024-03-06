//Ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#ifdef ADITYA
#include "mydebug.h"
// #define cerr cout
#else
#include<bits/stdc++.h>
#define see 
#endif
#define ll 			long long
#define bohot 		ios_base::sync_with_stdio(false)
#define tez 		cin.tie(NULL)
#define kro 		cout.tie(NULL)
#define next 		"\n"
#define pll 		pair<ll,ll>
#define m_p(a,b) 	make_pair(a,b)
#define vc 			vector<ll>
#define vp         	vector<pll>
#define vs			vector<string>
#define mll			map<ll,ll>
#define ff			first
#define ss 			second
#define pb(x)       push_back(x)
#define emb(x)      emplace_back(x)
#define all(x)      x.begin(),x.end()
#define rev(x)      x.rbegin(),x.rend()
#define max_ele(x)  *max_element(all(x))
#define min_ele(x)  *min_element(all(x))
#define LMIN  		LLONG_MIN
#define MIN  		INT_MIN
#define LMAX  		LLONG_MAX
#define MAX  		INT_MAX
#define for1(i,a,n) for (int i = a; i < n; i++)
#define for2(i,a,n) for (int i = n-1; i >= a; i--)
#define sumall(x)	accumulate(all(x),0)
#define YES         cout<<"YES"<<next;
#define NO          cout<<"NO"<<next;
#define yes         cout<<"Yes"<<next;
#define no          cout<<"No"<<next;
const ll mod=1e9+7;
const ll N = 1e5+5;			
using namespace std;
#define EACH(I7, AR7)        for(auto &I7 : AR7)
void Read() { return; }
void Print() { return; }
void Println() { cout << "\n"; return; }
template<class T> T Read(T& x)   { cin >> x; return x; }
template<class T> void Print(T a)   { cout << a; }
template<class T> void Println(T a) { cout << a << "\n"; }
template<class T> void Read(vector<T> &arr)   { EACH(i, arr) cin >> (i); }
template<class T> void Print(vector<T> arr)   { EACH(i, arr) {cout << i << " ";} }
template<class T> void Println(vector<T> arr) { EACH(i, arr) {cout << i << " ";} cout << "\n"; }
template<class T> void Read(vector<vector<T>> &arr)   { EACH(i, arr) Read(i); }
template<class T> void Print(vector<vector<T>> arr)   { EACH(i, arr) Println(i); }
template<class T> void Println(vector<vector<T>> arr) { EACH(i, arr) Println(i); }
template<typename T, typename... Args> void Read(vector<T> &arr, Args &... args)   { Read(arr); Read(args...);}
template<typename T, typename... Args> void Read(vector<vector<T>> &arr, Args &... args)   { Read(arr); Read(args...);}
template<typename T, typename... Args> void Read(T &a, Args &... args) { cin >> (a); Read(args...); }
template<typename T, typename... Args> void Print(vector<T> &arr, Args &... args)   { Print(arr); Print(args...);}
template<typename T, typename... Args> void Print(T a, Args... args) { cout << a << " "; Print(args...); };
template<typename T, typename... Args> void Println(vector<T> &arr, Args &... args)   { Print(arr); Println(args...);}
template<typename T, typename... Args> void Println(T a, Args... args) { cout << a << " "; Println(args...); };

void chalie_shuru_karte_hai(){
	ll n;
	Read(n);
	vc a(n);
	Read(a);
	see(a);
	vp ans;
	ll x=0;
	for1(i,0,n){
		x=0;
		while(ans.size()){
			if(ans.back().ff>=a[i])
				ans.pop_back();
			else{
				x=ans.back().ss;
				break;
			}
		}
		Print(x,"");
		ans.push_back({a[i],i+1});
	}
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
bohot;
tez;
kro;
ll t=1;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}