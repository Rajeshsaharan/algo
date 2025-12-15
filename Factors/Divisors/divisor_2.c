#include <stdio.h>

//optimized code

void divisors(long long int n){
    int i = 1;
    while(i * i <= n){
        if(n % i == 0){
            printf("%d ",i);
            if(i != n/i){
                printf("%d ", n/i);
            }
        }
        i++;
    }
}