#include<bits/stdc++.h>
//ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#define ll long long
#define fio ios_base::sync_with_stdio(false)
#define tez cin.tie(NULL)
using namespace std;
void tower(int n,int a,int b,int c){
	if (n == 0) {
        return;
    }
    tower(n - 1, a, c, b);
    cout<<a<<" "<<b<<endl;
    tower(n - 1, c, b, a);
}
void chalie_shuru_karte_hai(){
	ll n;
	cin>>n;
	cout<<(pow(2,n)-1)<<endl;
	tower(n,1,3,2);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
fio;
tez;
int t=1;
// cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}