#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
int n;
cin>>n;
int num;
int sum=0;
for (int i = 1; i < n; i++)
{
	cin>>num;
	sum+=num;
}
int actual=0;
for(int i=1;i<=n;i++)
	actual+=i;
cout<<actual-sum;
return 0;
}