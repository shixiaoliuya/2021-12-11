#include<bits/stdc++.h>
using namespace std;
int cal(string s) {
	int ans = 0;
	for(int i=0;i<s.length();i++) ans = ans * 10 + (s[i] - '0');
	return ans;
}
int main(){
	freopen("test1.out","w",stdout);
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		while(a != "6174") {
			for(int i=0;i<4-a.length();i++) a = "0" + a;//²»×ã4Î»ÍùÇ°²¹0 
			sort(a.begin(), a.end());
			string b = a;
			reverse(a.begin(), a.end());
			if(a == b){
				cout << a << " - " << b << " = 0000\n";
				break;
			}
			int ans = cal(a) - cal(b);
			cout << a << " - " << b << " = ";
			printf("%04d\n",ans);
			a = std::to_string(ans);
		}
	}
	
	return 0;
} 
