#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int x_a, y_a, I_a, W_a, x_b, y_b, I_b, W_b;
		cin >> x_a >> y_a >> I_a >> W_a >> x_b >> y_b >> I_b >> W_b;
		int left = min(x_a, x_b), right = max(x_a + I_a, x_b + I_b);
		int up = max(y_a, y_b), down = min(y_a - W_a, y_b - W_b);
		int tempx = right - left, tempy = up - down;
		if(tempx >= I_a + I_b || tempy >= W_a + W_b) {
			cout << "0\n";
			continue; 
		}
		cout << (I_a + I_b - tempx) * (W_a + W_b - tempy) << "\n";
	}
	
	return 0;
} 
