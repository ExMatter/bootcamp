
#include <stdio.h>

void binarySearch(long long int n,long long int *hasil){
    long long int temp;
    temp = (n*(n+1)*((2*n)+1))/6;
    if(temp>= *hasil){
        printf("%lld\n",n);
    }
    else{
        n+=1;
        binarySearch(n,hasil);
    }
}

int main() {
    // Write C code here
    long int testcase;
    scanf("%ld",&testcase);
    long int i;
    for(i=1;i<=testcase;i++){
    long long int hasil;
    scanf("%lld",&hasil);
    printf("Case #%d: ", i);
    binarySearch(0, &hasil);
    }    return 0;
}