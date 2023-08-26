#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
void chalie_shuru_karte_hai(){
	ll n;
    cin>>n;
     cout << 0 << endl;
    for (long long i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }

}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
int t=1;
// cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}