#include<bits/stdc++.h>
using namespace std;
int main(){
	int h, u, d, f;
	while(1){
		cin>>h>>u>>d>>f;
		if(h==0)
			break;
		double incr, fat, hei;
		incr=0.0;
		hei=u+0.0;
		if(hei>h){
            cout<<"success on day 1"<<endl;
            continue;
		}
		hei-=d;
		int day=1;
		fat=0.01*u*f;
		incr=u-fat;
		while(hei>=0){
			hei+=incr;
			day+=1;
			if(hei>h)
				break;
			incr-=fat;
			if(incr<0)
                incr=0;
			hei-=d;
		}
		if(hei>=h)
			cout<<"success on day "<<day<<endl;
		else
			cout<<"failure on day "<<day<<endl;
	}
	return 0;
}