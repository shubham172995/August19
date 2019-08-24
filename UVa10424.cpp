#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	while(getline(cin, a)){
        getline(cin, b);
		int c, d;
		c=d=0;
		for(int i=0;i<a.length();i++){
			if(a[i]>='a'&&a[i]<='z')
				c+=a[i]-'a'+1;
			else if(a[i]>='A'&&a[i]<='Z')
				c+=a[i]-'A'+1;
		}
		for(int i=0;i<b.length();i++){
			if(b[i]>='a'&&b[i]<='z')
				d+=b[i]-'a'+1;
			else if(b[i]>='A'&&b[i]<='Z')
				d+=b[i]-'A'+1;
		}
		while(c>=10){
			int temp=c;int sum=0;
			while(temp){
				sum+=temp%10;
				temp/=10;
				}
			c=sum;
			}
		while(d>=10){
			int temp=d;int sum=0;
			while(temp){
				sum+=temp%10;
				temp/=10;
				}
			d=sum;
			}
		if(c>d)
			swap(c, d);
		double res=c/(d+0.0);
		res*=100;
		printf("%.2f", res);
		cout<<" %\n";
		}
	return 0;
}