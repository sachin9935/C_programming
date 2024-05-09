#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Nesting on structure within another structure...
int main(){
    typedef struct pokemon{  
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
    }pokemon;

    
    typedef struct lagendarypokemon
    {pokemon normal;
    char ablity[10];
    }lagendarypokemon;

    typedef struct goodpokemon{
        lagendarypokemon legend;
        int specialattak;
    }goodpokemon;

    goodpokemon arceus;
    arceus.specialattak=300;
    strcpy(arceus.legend.ablity,"turn anyone stone");
    arceus.legend.normal.attack=500;

    
    lagendarypokemon newtow;
    strcpy(newtow.ablity,"pressuer");
    newtow.normal.hp=150;
    newtow.normal.attack=180;
    strcpy(newtow.normal.name,"mewtwo");
    
}



