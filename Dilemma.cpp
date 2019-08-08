#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(s[i]=='1'){
				s[i]='3';
				if(s[i+1]=='1')
					s[i+1]='0';
				else s[i+1]='1';
				int temp=i-1;
				while(temp>=0&&s[temp]=='0'){
					s[temp]='3';
					--temp;
				}
			}
		}
		bool flag=true;
		for(int i=0;i<len;i++){
			if(s[i]!='3'){
				flag=false;
				break;
			}
		}
		if(!flag)
			cout<<"LOSE\n";
		else cout<<"WIN\n";
	}
	return 0;
}