#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int t=1;
	while(cin>>n){
		map<string, int> m;
		vector<string> names(n);
		for(int i=0;i<n;i++){
			cin>>names[i];
			m.insert(make_pair(names[i], 0));
		}
		for(int i=0;i<n;i++){
			string giver;
			cin>>giver;
			int amt, people;
			cin>>amt>>people;
			if(people==0)continue;
			if(amt%people!=0){
				int temp=amt/people;
				amt=temp*people;
			}
			for(int j=0;j<people;j++){
				string temp;
				cin>>temp;
				m[temp]+=amt/people;
			}
			m[giver]+=(-1*amt);
		}
		if(t++>1)
			cout<<endl;
		for(int i=0;i<n;i++){
			cout<<names[i]<<" "<<m[names[i]]<<endl;
		}
	}
	return 0;
}