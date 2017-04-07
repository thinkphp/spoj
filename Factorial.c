#include<stdio.h>
#include<stdlib.h>
#define LI long int

int main()
{
  LI num,
      count;

  int T; 

  scanf("%d",&T);

  while(T--){
 
        scanf("%ld",&num);

        count = 0;
  
        while(num>=5) {

              count += num / 5;
              num /= 5;  
        }          

        printf("%ld\n", count); 
  }

return 0;
}