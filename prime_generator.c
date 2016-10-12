/*
 *     PRIME1 - Prime Generator
 *     http://www.spoj.com/problems/PRIME1/
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

unsigned int numbers[ 3500 ], len = 0;

inline bool prime(unsigned int x) 
{

     unsigned int i, 
                  last = sqrt( x );

     for(i = 2; i <= last; i++) 
     {

         if( !(x % i) )
         {
               return 0;
         } 
     }

     return 1; 
};

void generate() {

     unsigned int i;

     for(i = 2; i < 32000; i++) 
     {
         if( prime( i ) ) 
         {
             numbers[ len++ ] = i;
         }
     }
};

inline bool process(unsigned int x) {

    unsigned int i, last = sqrt( x );

    for(i = 0; i < len && numbers[i] <= last; i++) 
    {

        if( !(x % numbers[ i ]) ) {
 
             return 0;
        }
    }

    return 1; 
};

int main() {

    int t;
    unsigned int n, m, 
                 i, j;

    generate();
     
    scanf("%u", &t);

    for(i = 1; i <= t; i++) {
  
        scanf("%u %u", &n, &m);

        if(n == 1) n++;

        for(j = n; j <= m; j++) {

            if( process( j ) ) printf("%u\n", j);
        }

        printf("\n");
    }

    return (0);
}