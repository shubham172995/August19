#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		//cin.ignore();
		/*for(int i=0;i<n-1;i++)
			scanf("%s", s[i]);*/
		int i=0, res=0;
		/*
		-1-> -x
		0-> +x
		1-> +z
		2-> -z
		3-> +y
		4-> -y
		*/
		--n;
		for(int i=0;i<n;i++){
			char s[3];
			scanf("%s", s);
			//cout<<"Hey, "<<res<<endl;
			//printf("hey, %s\n", s[i]);
			if(!strcmp(s, "No")){
				continue;
			}
			else if(!strcmp(s, "+z")){
				if(res==0)
					res=1;
				else if(res==1)
					res=-1;
				else if(res==2)
					res=0;
				else if(res==-1)
					res=2;
			}
			else if(!strcmp(s, "-z")){
				if(res==0)
					res=2;
				else if(res==-1)
					res=1;
				else if(res==1)
					res=0;
				else if(res==2)
					res=-1;
			}
			else if(!strcmp(s, "+y")){
				if(res==0)
					res=3;
				else if(res==-1)
					res=4;
				else if(res==3)
					res=-1;
				else if(res==4)
					res=0;
			}
			else if(!strcmp(s, "-y")){
				if(res==-1)
					res=3;
				else if(res==0)
					res=4;
				else if(res==3)
					res=0;
				else if(res==4)
					res=-1;
			}
		}
		if(res==-1)
			cout<<"-x"<<endl;
		else if(res==0)
			cout<<"+x"<<endl;
		else if(res==1)
			cout<<"+z"<<endl;
		else if(res==2)
			cout<<"-z"<<endl;
		else if(res==3)
			cout<<"+y"<<endl;
		else if(res==4)
			cout<<"-y"<<endl;
	}
	return 0;
}