#include <stdio.h>

//function prototypes
int reverse(int x);  

int main() 
{

    int how_much,
        num_one, num_two,
        i, j, r;

    scanf("%d", &how_much);

    for(i = 1; i <= how_much; i++) {

        scanf("%d %d", &num_one, &num_two);
        num_one = reverse(num_one); 
        num_two = reverse(num_two);
        r = num_one + num_two;
        r = reverse(r);
        printf("%d\n", r);
    } 

    return(0);
};

int reverse(int x) 
{
    int s = 0;

    while( x > 0) 
    {
      s = (s * 10) + (x % 10); 

      x = x / 10;  
    }  

   return s;
}