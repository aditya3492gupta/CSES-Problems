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
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	ll result = 0;
	ll len = 0;
	for (int i = 0; i < 2 * n; i++) {
    	if (v[i % n] == 1) {
        	len++;
        	result = max(result, len);
    	} else {
    	    len = 0;
    }
}
cout << result << endl;
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
int t=1;
// cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
#ifndef ONLINE_JUDGE 
cout<<"Date : "<<__DATE__<< endl;
cout<<"Time : "<<__TIME__<< endl;
#endif
return 0;
}