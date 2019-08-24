#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int k, m;
		cin>>k;
		if(k==0)
			break;
		cin>>m;
		map<int, bool> a;
		for(int i=0;i<k;i++){
			int temp;
			cin>>temp;
			a[temp]=1;
		}
		//cout<<a[123]<<" "<<a[9876]<<" "<<a[2222]<<endl;
		bool flag=false;
		for(int i=0;i<m;i++){
			int temp;
			cin>>temp;
			int c, count=0;
			cin>>c;
			if(temp>k)
				flag=true;
			for(int j=0;j<temp;j++){
				int id;
				cin>>id;
				//cout<<id<<" "<<a[id]<<endl;
				if(a[id])
					++count;
			}
			if(count<c)
				flag=true;
			//cout<<count<<endl;
		}
		if(!flag)
			cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}