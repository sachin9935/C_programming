#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct pokemon {  
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
} pokemon;

void change(pokemon* p) {
    p->attack = 150;
    p->hp = 100;
    p->speed = 400;
    p->tier = 'b';
    strcpy(p->name, "anuj morya");
    return;
}

int main() {
    pokemon pikachu={100,200,300,'A',"sachin"};
    // pikachu.attack = 100;
    // pikachu.hp = 50;
    // pikachu.speed = 200;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "sachin mishra");

    printf("Before change:\n");
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Speed: %d\n", pikachu.speed);
    printf("Name: %s\n", pikachu.name);

    change(&pikachu);

    printf("After change:\n");
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Speed: %d\n", pikachu.speed);
    printf("Name: %s\n", pikachu.name);

    return 0;
}





// // // #access structure using pionter....