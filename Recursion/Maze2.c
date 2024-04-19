#include<stdio.h>
int maze2(int n,int m){
        int rightway=0;
        int downways=0;
        if(n==1 && m==1) return 1;
        if(n==1){
            rightway+=maze2(n,m-1);
        }
        if(m==1){
            downways+=maze2(n-1,m);
        }
        if(n>1 && m>1){
            rightway+=maze2(n,m-1);
            downways+=maze2(n-1,m);
        }
        int totalways=rightway+downways;
        return totalways;

}




int main(){
    int n, m;
    printf("Enter the number of 2rows in the maze: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the maze: ");
    scanf("%d", &m);
    
    int nofways = maze2(n, m); // Assuming maze starts from (1,1)
    printf("Total number of ways to traverse the maze: %d", nofways);
    return 0;
}