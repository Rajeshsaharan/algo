#include <stdio.h>

//time complexity : - O(n) 
//signature long long int -> void
//purspose print all divisors of a number
void print_divisors(long long int n){
    int i = 1;
    while(i < n){
        if(n %i  == 0) printf("%d ", i);
        i++;
    }
}
int main(){
    //print all divisors
    print_divisors(300);

}