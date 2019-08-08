#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		std::string s;
		std::cin>>s;
		int l=s.length();
		for(int i=0;i<l;i++){
			if(s[i]=='1'){
				s[i]='2';
				if(s[i+1]=='0')
					s[i+1]='1';
				else s[i+1]='0';
				int j=i-1;
				while(j>=0&&s[j]=='0'){
					s[j]='2';
					--j;
				}
			}
		}
		bool flag=false;
		for(int i=0;i<l;i++){
			if(s[i]!='2'){
				flag=true;
				break;
			}
		}
		if(!flag)
			printf("WIN\n");
		else printf("LOSE\n");
	}
	return 0;
}