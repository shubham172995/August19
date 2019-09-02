#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		string s;
		cin>>s;
		int l=s.length();
		int r, d, diff;
		r=d=-1;diff=INT_MAX;
		for(int i=0;i<l;i++){
			if(s[i]=='.')
				continue;
			if(s[i]=='R'){
				if(d!=-1){
					r=i;
					diff=diff<(abs(d-r))?diff:abs(d-r);
				}
				else if(d==-1)
					r=i;
			}
			else if(s[i]=='D'){
				if(r!=-1){
					d=i;
					diff=diff<(abs(d-r))?diff:abs(d-r);
				}
				else if(r==-1)
					d=i;
			}
			else if(s[i]=='Z'){
				diff=0;
				break;
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}