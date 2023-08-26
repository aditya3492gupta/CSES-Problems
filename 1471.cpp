#include<bits/stdc++.h>
//ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#define ll long long
#define bohot ios_base::sync_with_stdio(false)
#define tez cin.tie(NULL)
#define kro cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)
#define next '\n'
using namespace std;
void chalie_shuru_karte_hai(){
	string s;
	cin>>s;
	ll n=s.size();
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='?')
			count++;
	}
	if(count){
	if(s[0]=='?')
		cout<<9*count*10/2<<next;
	else
		cout<<pow(10,count)<<next;}
	else
		cout<<"0"<<next;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
bohot;
tez;
kro;
int t;
cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}