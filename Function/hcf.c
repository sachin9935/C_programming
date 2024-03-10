#include<stdio.h>

int min(int a, int b){
    return a < b ? a : b;
}

int gcd(int a, int b){
    int hcf = 1; // Initialize to 1
    for(int i = 1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    int b;
    printf("Enter number: ");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("The HCF/GCD of %d and %d is: %d", a, b, hcf);
    return 0;
}
