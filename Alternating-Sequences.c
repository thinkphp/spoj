#include <stdio.h>
#define MAXS 10000
#define FIN "altseq.in"

int sign(int a) {return (a > 0) ? 1 : 0; }

int main() {
   int i, j, N, max, 
          arr[MAXS], 
           dp[MAXS];
 
   freopen(FIN, "r", stdin);

   scanf("%d", &N);

   for(i = 0; i < N; ++i) scanf("%d", &arr[i]);

   memset(dp,1,sizeof(dp));

   for(i = 0; i < N; ++i) dp[i] = 1;

   for(i = 1; i < N; ++i) {

       for(j = 0; j < i; ++j) {

           if(abs(arr[i]) > abs(arr[j]) && sign(arr[i]) != sign(arr[j]) && dp[i] < dp[j] + 1) dp[i] = dp[j] + 1;
       }
   }

   max = -1;

   for(i = 0; i < N; ++i) if(max < dp[i]) max = dp[i]; 

   printf("%d", max);

   return(0);
}