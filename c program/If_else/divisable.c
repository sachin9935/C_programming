 #include<stdio.h>

     
     
     int main(){
     int x,y,a,b;
     printf("Enter number...");
     scanf("%d",&x);
     if(x%5==0 || x%3==0){
        printf("it is divisable....");
     }
     else{
        printf("it is not divisable....");
     }
     return 0;
     }