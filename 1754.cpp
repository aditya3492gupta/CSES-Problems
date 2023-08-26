#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
void chalie_shuru_karte_hai(){
	long long a,b;
	cin>>a>>b;
	int ans=__gcd(a,b);
	if(ans%2==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
int t;
cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}