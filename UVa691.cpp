#include<bits/stdc++.h>
using namespace std;
int main(){
	int seq=1;
	while(1){
		int n, m, c;
		cin>>n>>m>>c;
		if(n==0&&m==0&&c==0)
			break;
		vector<pair<int, int> > a(n);
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a[i].first=0;
			a[i].second=temp;
		}
		int total=0, max=0;
		bool flag=true;
		for(int i=0;i<m;i++){
			int temp;
			cin>>temp;
			if(a[temp-1].first==0){
				a[temp-1].first=1;
				total+=a[temp-1].second;
			}
			else if(a[temp-1].first==1){
				a[temp-1].first=0;
				total-=a[temp-1].second;
			}
			max=max>total?max:total;
			if(total>c)
					flag=false;
		}
		cout<<"Sequence "<<seq<<endl;
		if(!flag){
			cout<<"Fuse was blown.\n";
		}
		else{
			cout<<"Fuse was not blown.\n";
			cout<<"Maximal power consumption was "<<max<<" amperes.\n";
		}
		++seq;
		cout<<endl;
	}
	return 0;
}