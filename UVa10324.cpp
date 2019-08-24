#include<bits/stdc++.h>
using namespace std;
int main(){
	int cas=1;
	char s[1000111];
	while(scanf(" %s ", s) != EOF){
		int l=strlen(s);
		vector<int> a(l+1);
		a[0]=0;
		for(int i=1;i<=l;i++){
			a[i]=a[i-1]+(s[i-1]-'0');
		}
		int t;
		cin>>t;
		cout<<"Case "<<cas<<":"<<endl;
		++cas;
		for(int i=0;i<t;i++){
			int c, b;
			cin>>b>>c;
			if(b>c){
				swap(b, c);
			}++b;++c;
			if((a[c]-a[b-1])==0)
				cout<<"Yes\n";
			else if((a[c]-a[b-1])==(c-b+1))
				cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}