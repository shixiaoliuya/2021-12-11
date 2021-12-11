#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> B;
		vector <int> C;
		for(int i = 0;i < n; i++) {
			int x;
			cin >> x;
			if(x & 1) B.push_back(x);
			else C.push_back(x);
		}
		for(auto &i:B) cout << i << " ";
		cout << "\n";
		for(auto &i:C) cout << i << " ";
		cout << "\n";
	}
	
	return 0;
} 
