#include<stdio.h>
int main () {
    int n=6;
    int fact=1;
    for(int i=1;i<=6;i++){
    fact=fact*i;
    }    
    printf("%d",fact);
    
    return 0;
}