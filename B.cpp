#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
		scanf("%d/%d",&a,&b);
		int x = __gcd(a,b);
		printf("%d/%d\n",a/x, b/x);
	}
	
	return 0;
} 
