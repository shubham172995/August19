int Solution::maxSpecialProduct(vector<int> &A) {
    unsigned long long int prod=0;
    for(int i=1;i<A.size()-1;i++){
        int j=i-1;
        int l, r;l=r=0;
        while(j>=0){
            if(A[j]>A[i]){
                l=j;
                break;
            }
            --j;
        }
        j=i+1;
        while(j<A.size()){
            if(A[j]>A[i]){
                r=j;
                break;
            }
            ++j;
        }
        unsigned long long int temp=l*r;
        prod=prod>temp?prod:temp;
    }
    return (prod%1000000007);
}
