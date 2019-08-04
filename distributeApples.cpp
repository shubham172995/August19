#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int n, k;
		cin>>n>>k;
		unsigned long long int temp;
		temp=n/k;
		if(temp%k==0)
			printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}