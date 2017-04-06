#include <stdio.h>

int Feynman(int s) {

    if(s == 1) return 1;

    else 

        return s * s + Feynman( s - 1 );
};


int main() 
{
    int n;

    scanf("%d", &n);

    while(1) { 
          
        printf("%d\n", Feynman( n )) ;

        scanf("%d", &n);

        if(n == 0) break;
    }

    return(0);
};