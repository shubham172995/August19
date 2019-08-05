#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	long long int total=0, max=0;
	std::vector<long long int> a(n);
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		total+=a[i];
		max=max>a[i]?max:a[i];
	}
	if(n==2){
		if(a[0]==a[1])
			printf("YES\n");
		else printf("NO\n");
	}
	else if(total%2==0&&(total-max)>=max)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}