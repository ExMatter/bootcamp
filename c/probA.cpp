#include <stdio.h>
 
int rec(int p){
    if(p == 0){
        return 1;
    } else if(p == 1){
        return 2;
    } else if(p % 5 == 0){
        return n*2;
    } else {
        return rec(p-1) + p + rec(p-2) + p - 2;
    }
}
int main(){





    return 0;
}