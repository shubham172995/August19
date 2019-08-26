#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<pair<int, int> > q;
	for(int i=0;i<10;i++){
		q.push(make_pair(((i*9)%10), i));
	}
	while(!q.empty()){
		cout<<q.top().second<<endl;
		q.pop();
	}
	return 0;
}