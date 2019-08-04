#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int l, b, h;
		cin>>l>>b>>h;
		if(l<=20&&b<=20&&h<=20)
			cout<<"Case "<<i<<": good\n";
		else cout<<"Case "<<i<<": bad\n";
	}
	return 0;
}