int Solution::maxSpecialProduct(vector &a) {
int n=a.size();
vector maxidx(n);
vector minidx(n);
maxidx[0]=0;minidx[n-1]=0;
for(int i=1;i<n;i++){
if(a[i-1]>a[i])
maxidx[i]=i-1;
else{
int j=maxidx[i-1];
while(j>0&&a[j]<=a[i]){
j=maxidx[j];
}
maxidx[i]=j;
}
}
for(int i=n-2;i>=0;i–){
if(a[i+1]>a[i])
minidx[i]=n-(i+1);
else{
int j=minidx[i+1];
while(j>0&&a[n-j]<=a[i])
j=minidx[n-j];
minidx[i]=j;
}
}
long long int maximum=0;
for(int i=0;i<n;i++){
maximum=max(maximum,(long long int)maxidx[i]*((n-minidx[i])%n));
}
return maximum%1000000007;
}