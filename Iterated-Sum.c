#include <stdio.h>

int main(void) {
    int a,//first number
        b,//second number
        i,//itertor
        sum = 0; //sum var 
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++) {
    	 
    	sum += i*i;  
    } 
    printf("%d",sum);
	return 0;
}