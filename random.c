#include <stdio.h>
#include <stdlib.h>

//Generates a number between 65 and 90
char randchar(){
    char c = rand() % (90 + 1 - 65) + 65;
    return c;
}