#include<bits/stdc++.h>
using namespace std;
const double pi = 3.1415926;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		double l;
		cin >> l;
		cout << fixed << setprecision(2) << 9.0/64*l*l*pi << "\n";
	}
	
	return 0;
} 
