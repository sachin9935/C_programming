#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef union pokemon {  
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
} pokemon;


int main() {
    pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 50;
    pikachu.tier = 'A';
    pikachu.speed = 200;

    // strcpy(pikachu.name, "sachin mishra");

    printf("Before change:\n");
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Speed: %d\n", pikachu.speed);
    // printf("Name: %s\n", pikachu.name);


    return 0;
}





// // // #access structure using pionter....