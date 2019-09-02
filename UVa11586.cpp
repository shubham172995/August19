#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		string str;
		int m, f;
		m=f=0;
		getline(cin, str);
		int piece=0;
		for(int j=0;j<str.length();j++){
			if(str[j]!=' '){
				if(str[j]=='M')
					m++;
				else if(str[j]=='F')
					f++;
				if(str[j+1]=='M')
					m++;
				else if(str[j+1]=='F')
					f++;
                j+=1;
				++piece;
			}
		}
		if(m==f&&piece>1)
			cout<<"LOOP\n";
		else cout<<"NO LOOP\n";
	}
	return 0;
}