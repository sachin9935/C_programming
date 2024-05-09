#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{  
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
    }pokemon;

    pokemon a,b,c;
    a.attack=100;
    a.hp=50;
    a.speed=200;
    a.tier='A';
    strcpy(a.name,"sachin mishra");

    //copy a to b
    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);

    b=a; //deep copy..
    b.attack=200; //change the value of b...

    c=a;
    printf("%d",b.attack);



    return 0;
}