#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<std::string> s(n);
	for(int i=0;i<n;i++)
		std::cin>>s[i];
	std::vector<int> a(m);
	for(int i=0;i<m;i++)
		scanf("%d", &a[i]);
	std::vector<std::vector<int> > ans(m);
	for(int j=0;j<m;j++)
		ans[j].resize(5);
	/*for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			++ans[j][s[i][j]-'A'];
		}
	}*/
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			++ans[j][s[i][j]-'A'];
		}
	}
	/*for(int i=0;i<m;i++){
		for(int j=0;j<5;j++)
			std::cout<<ans[i][j]<<" ";
		std::cout<<std::endl;
	}*/
	std::vector<int> max(m);
	for(int i=0;i<m;i++){
		for(int j=0;j<5;j++){
			max[i]=max[i]>ans[i][j]?max[i]:ans[i][j];
		}
	}
	/*for(int i=0;i<m;i++)
		std::cout<<max[i]<<" ";
	std::cout<<std::endl;*/
	int score=0;
	for(int i=0;i<m;i++)
		score+=(a[i]*max[i]);
	printf("%d\n", score);
	return 0;
}