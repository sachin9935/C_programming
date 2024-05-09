#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon{  
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
    }pokemon;

int main(){
    // int* x;>store the addares of x;
    pokemon pikachu;
    pikachu.attack=100;
    pikachu.hp=50;
    pikachu.speed=200;
    pikachu.tier='A';
    strcpy(pikachu.name,"sachin mishra");
    pokemon* x=&pikachu;

    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.name);

   
    printf("first add: %p",x);
}

