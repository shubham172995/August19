#include<bits/stdc++.h>
using namespace std;
int main(){
	int r, c;
	while(1){
        scanf("%d", &r);
		if(!r)
			break;
        scanf("%d", &c);
		vector<int> a(c);
		int total=0;
		for(int i=0;i<c;i++)
			cin>>a[i];
		int temp=0;
		total=r-a[0];
		temp=a[0];
		for(int i=1;i<c;i++){
			if(a[i]<temp){
				total+=temp-a[i];
			}
			temp=a[i];
		}
		cout<<total<<endl;
	}
	return 0;
}