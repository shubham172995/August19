#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, days;
		cin>>n>>days;
		vector<pair<long long int, pair<long long int, long long int> > >a;
		for(int i=1;i<=n;i++){
			long long int q, w, e;
			cin>>q>>w>>e;
			a.push_back(make_pair(q, make_pair(w, e)));			
		}
		sort(a.begin(), a.end());
		int temp=0;
		priority_queue<pair<long long int, long long int> > q;
		for(int i=1;i<=days;i++){
			while(temp<n && a[temp].first==i){
				q.push(make_pair(a[temp].second.second, a[temp].second.first));
				++temp;
			}
			/*if(a[i])
				q.push(make_pair(s[a[i]], a[i]));*/
			if(!q.empty()){
				pair<long long int, long long int> p=q.top();
				q.pop();
				--p.second;
				if(p.second>0){
					q.push(p);
				}
			}
		}
		long long int total=0;
		/*for(int i=1;i<=n;i++)
			total+=(s[i]*t[i]);
		cout<<total<<endl;*/
		while(!q.empty()){
			pair<long long int, long long int> p=q.top();
			q.pop();
			total+=p.first*p.second;
		}
		cout<<total<<endl;
	}
	return 0;
}