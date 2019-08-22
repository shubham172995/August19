#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, p;
	int seq=1;
	while(1){
		cin>>n>>p;
		if(n==0&&p==0)
			break;
		vector<string> b(p);
		string temp;
		vector<double> price(p);
		vector<int> ref(p);
		int max=0;double pr=INT_MAX+0.0;
		int ans=-1;
		//cin.ignore();
		for(int i=0;i<n;i++){
			cin.ignore();
			getline(cin, temp);
			//cin.ignore();
		}
		for(int i=0;i<p;i++){
			getline(cin, b[i]);
			scanf("%lf %d\n", &price[i], &ref[i]);
			if(max<ref[i]){
				ans=i;
				max=ref[i];
				pr=price[i];
			}
			else if(max==ref[i]&&pr>price[i]){
				pr=price[i];
				ans=i;
			}
			for(int j=0;j<ref[i];j++){
				string temp;
				getline(cin, temp);
			}
			//cin.ignore();
		}
		/*for(int i=0;i<n;i++){
			cout<<a[i]<<endl;
		}
		for(int i=0;i<p;i++){
			cout<<b[i]<<endl;
		}
		cout<<"Hey\n";*/
		if(seq>1)
			cout<<endl;
		cout<<"RFP #"<<seq<<endl<<b[ans]<<endl;
		++seq;
	}
	return 0;
}