#include<bits/stdc++.h>
using namespace std;
long long z(long long int n){
	int count=0;
	 for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
	return count;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
long long int n;
cin>>n;
long long zero=z(n);
cout<<zero;
return 0;
}