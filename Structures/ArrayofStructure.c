#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3];  // arr[0],arr[1]....arr[2]
    arr[0].hp=100;
    arr[0].attack=200;
    arr[0].speed=300;
    arr[0].tier='A';
    strcpy(arr[0].name,"Sachin mishra");


    arr[1].hp=100;
    arr[1].attack=400;
    arr[1].speed=900;
    arr[1].tier='B';
    strcpy(arr[1].name,"anuj morya");

    arr[2].hp=100;
    arr[2].attack=1000;
    arr[2].speed=1000;
    arr[2].tier='c';
    strcpy(arr[2].name,"Priyansu gupta");
    
    for(int i=0; i<3; i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        
    }



    return 0;
}