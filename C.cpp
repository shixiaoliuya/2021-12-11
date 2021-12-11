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
		int a = INT_MAX, b = INT_MIN, c = INT_MAX, d = INT_MIN;
		int x, y;
		for(int i = 0; i < n; i++) {
			cin >> x;
			if(x < a) a = x;
			if(x > b) b = x;
		}
		for(int i = 0; i < n; i++){
			cin >>y;
			if(y < c) c = y;
			if(y > d) d = y;
		}
		cout << (b - a) * (d - c) << "\n";
	}
	
	return 0;
} 
