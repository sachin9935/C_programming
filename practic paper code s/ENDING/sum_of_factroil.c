// #include<stdio.h>
// int main(){
//     int n;
//     long long sum=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         if(i==1){
//             sum=sum+1;
//         }
//         else{
//             sum=sum+i;
//         }
//         printf("the serice is %||d\n",sum);
//         return 0;
//     }
// }

#include <stdio.h>

int main() {
  int n;
  long long sum = 1;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      sum = sum + 1; // Add 1 for 1!
    } else {
      sum = sum * i; // Calculate factorial and add to sum
    }
  }

  printf("Sum of the series is %lld\n", sum);

  return 0;
}