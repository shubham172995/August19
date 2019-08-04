#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int max=0;
		int n;
		scanf("%d", &n);
		std::vector<int> a(n), b(n), c(n);
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]);
		for(int i=0;i<n;i++)
			scanf("%d", &b[i]);
		for(int i=0;i<n;i++){
			int temp=(a[i]*20)-(b[i]*10);
			max=max>temp?max:temp;
		}
		if(max<0)
			printf("0\n");
		else printf("%d\n", max);
	}
	return 0;
}