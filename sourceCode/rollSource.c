#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


long int num = 0;
int numOfMaxRolls = 0;


int rollD4(){
    int upper = 4, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){
        numOfMaxRolls = numOfMaxRolls + 1;
    }
    printf("%d\n", num);
    return num;
}


int rollD6(){
    int upper = 6, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){
        numOfMaxRolls = numOfMaxRolls + 1;
    }
    printf("%d\n", num);
    return num; 
}

int rollD8(){
    int upper = 8, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){
        numOfMaxRolls = numOfMaxRolls + 1;
    }
    printf("%d\n", num);
    return num;
}

int rollD10(){
    int upper = 10, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){
        numOfMaxRolls = numOfMaxRolls + 1;
    }
    printf("%d\n", num);
    return num;
}

int rollD12(){
    int upper = 12, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){
        numOfMaxRolls = numOfMaxRolls + 1;
    }
    printf("%d\n", num);
    return num;
}

int rollD20(){
    int upper = 20, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){                      //calculates the amount of rolls that 
        numOfMaxRolls = numOfMaxRolls + 1;  //are the maximum that dice can roll
    }
    printf("%d\n", num);
    return num;
}

int rollD100(){
    int upper = 100, lower = 1;
    num = (rand() % (upper - lower + 1)) + lower;
    if (num == upper){                      //calculates the amount of rolls that 
        numOfMaxRolls = numOfMaxRolls + 1;  //are the maximum that dice can roll
    }
    printf("%d\n", num);
    return num;
}

int main( int argc, char *argv[] )
{
    if (argc != 3){
        printf("----------------------------\n");
        printf("\x1b[36mVersion Beta 3.0\x1b[0m\n\n");
        printf("\n\x1b[33mInvalid Input\x1b[0m.\nMust use an integer for the first argument.\nMust use: \x1b[36md4,d6, d8, d10, d12, d20, or d100\x1b[0m for the second argument.\n");
        printf("----------------------------\n");
        exit(0);
    }
    srand(time(0));
    int amount = atoi(argv[1]); 
    const char *type = argv[2];
    int n; 
    printf("----------------------------\n");
    printf("\x1b[36mVersion Beta 3.0\x1b[0m\n\n");
    int ttl = 0;
    if (strcmp(type, "d8") == 0 ){     //checks what type of dice
        for(n = 0; n < amount; n++){   //only rolls the amount of times specified.
            ttl = ttl + rollD8();      //adds up the rolls
        }
    } else if (strcmp(type, "d6") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD6();
        }
    } else if (strcmp(type, "d4") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD4();
        }
    } else if (strcmp(type, "d10") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD10();
            }
    } else if (strcmp(type, "d12") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD12();
            }
    } else if (strcmp(type, "d20") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD20();
            }
    } else if (strcmp(type, "d100") == 0 ){
        for(n = 0; n < amount; n++){
            ttl = ttl + rollD100();
            }
    }
    printf("Total: \x1b[35m%d\x1b[0m\n", ttl);
    printf("Number of max rolls: \x1b[32m%d\x1b[0m\n", numOfMaxRolls);
    printf("Amount rolled: \x1b[33m%d\x1b[0m\n", amount);
    printf("Type rolled: \x1b[33m%s\x1b[0m\n", type);
    printf("----------------------------\n");
      
}
