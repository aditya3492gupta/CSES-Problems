//Ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#include<bits/stdc++.h>
#define ll long long
#define bohot ios_base::sync_with_stdio(false)
#define tez cin.tie(NULL)
#define kro cout.tie(NULL)
#define next "\n"
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
#define yes cout<<"YES"<<next;
#define no cout<<"NO"<<next;
using namespace std;
void chalie_shuru_karte_hai(){
	ll n, x, y, curr_end = 0, total = 0;
	vii arr;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(y, x));
	}
	// sorting by ending times
	sort(all(arr));
	for (auto ele : arr)
	{
		if (ele.second >= curr_end)
		{
			curr_end = ele.first;
			total++;
		}
	}
	cout << total;
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