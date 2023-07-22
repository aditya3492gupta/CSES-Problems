#include<bits/stdc++.h>
//ek hi naara ek hi naam JAI SHREE RAM JAI SHREE RAM
#define ll long long
#define fio ios_base::sync_with_stdio(false)
#define tez cin.tie(NULL)
using namespace std;
void chalie_shuru_karte_hai(){
	string s;
	cin>>s;
	vector<int> a(26);
    for(char c : s) a[c - 'A']++;
    
    int check = 0;
    for(int i = 0; i < 26; i++) check += (a[i] % 2);
    //only one of the letters should be of odd frequency or all pair
    if(check > 1){
        cout << "NO SOLUTION";
        return ;
    }
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
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
fio;
tez;
int t=1;
// cin>>t;
while(t--){
	chalie_shuru_karte_hai();
}
return 0;
}