#include<stdio.h>

int main(){
    struct pokemon{  //user define data type
    int hp;
    int speed;
    int attack;
    char tier;
    }pikachu,charizard;

    // struct pokemon pikachu;
    printf("Enter a pikachu arrack:");
    // printf("%d","Enter a pikachu speed:");
    scanf("%d",&pikachu.attack);
    // scanf("%d",&pikachu.speed);
    // pikach,u.attack=60;
    pikachu.hp=50;
    // pikachu.speed=50;
    pikachu.tier='A';

    printf("%d",pikachu.attack);
    // printf("%d",pikachu.speed);

    // struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='A';







};