#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+10][m+10];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		vector<int>col(m);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				col[i] |= (a[j][i] << j);
			}
		}
		int ans = 0;
		for(int i=(1 << n) - 1; i >= 0; i--){
			int sum = 0;
			for(int j=0;j<m;j++){
				int cnt = __builtin_popcount(i ^ col[j]);
				sum += max(cnt, n - cnt);
			}
			ans = max(ans, sum);
		}
		cout << ans << "\n";
	}
	
	return 0;
} 
