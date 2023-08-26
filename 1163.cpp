//Ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#ifdef ADITYA
#include "mydebug.h"
// #define cerr cout
#else
#include<bits/stdc++.h>
#define see 
#endif
#define ll long long
#define bohot ios_base::sync_with_stdio(false)
#define tez cin.tie(NULL)
#define kro cout.tie(NULL)
#define next1 "\n"
#define pii pair<int,int>
#define m_p(a,b) make_pair(a,b)
#define vc vector<ll>
#define vii vector<pii>
#define pb(x) push_back(x)
#define emb(x) emplace_back(x)
#define all(x) x.begin(),x.end() 
#define max_ele(x) *max_element(all(x))
#define min_ele(x) *min_element(all(x))
#define for1(i,a,n) for (int i = a; i < n; i++)
#define for2(i,a,n) for (int i = n-1; i > a; i--)
#define yes cout<<"YES"<<next;
#define no1 cout<<"NO"<<next;
#define mod 1000000007
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
	int x,n;
	Read(x,n);
	  set<int> position;
    multiset<int> length;
    //now putting the initial lengths in the position set
    position.insert(0);
    position.insert(x);
    //and now substitutinh the lengths difference into the length array
    length.insert(x - 0); 
    //scanning each value
    for(int i = 0; i<n; i++){
        int no;
        Read(no);
        position.insert(no);
        //finding the iterator of the current element added
        auto it = position.find(no);
        //now using prev to fing the previous iterator
        //also finding the next value
        int previousVal = *prev(it);
        int nextVal = *next(it);
        //erasing the previous length by finding it
        length.erase(length.find(nextVal - previousVal));
        //inserting the new length we got
        length.insert(no - previousVal);
        length.insert(nextVal - no);
        //now printing out the biggest element of the set
        cout<<*length.rbegin()<<" ";
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
int t=1;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}