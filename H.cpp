#include<bits/stdc++.h>
using namespace std;
bool cmp(string &a, string &b) {
	return a + b > b + a;
} 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n, cmp);
		for(auto &i:a) cout << i;
		cout << "\n";
	}
	
	return 0;
} 
