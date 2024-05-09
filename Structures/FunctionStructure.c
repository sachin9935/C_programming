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

void fun(pokemon p){
    printf("%d",p.hp);
    return 0;
}

void change(pokemon p){
    p.hp=60;
    p.attack=150;
    p.speed=600;
}
int main(){
    
    pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=100;
    pikachu.speed=500;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    
    // fun(pikachu);
}

