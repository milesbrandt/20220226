// Programmer: Miles Brandt
// Date: 20220226
// File: numeric_literals.c
// Description: Just messing around with numeric literals in C proper.

#include <stdio.h>
#include <math.h>

extern int i, j, k, beef;
extern char c, ch;
extern float hypo_square;
extern char* c_star, ch_star;

int main(){
    int i, j, k, beef;
    char c, ch;
    char* c_star, ch_star;
    float hypo_square;
    
    i = 3;
    j = 4;
    k = 5;
    hypo_square = (float)pow(i, 2) + (float)pow(j, 2); // Lossy casting.
    // Now let's make ourselves a triangle!
    printf("Variable \'k\'s value was defined as %d. \n", k);
    k = (int)sqrt(hypo_square); // Very lossy casting.
    printf("Varialbe \'k\'s calculated value is %d. \n", k);
    beef = 0xDEADDEADU;
    printf("I'm positive that I'm dead beef: %d.\n", beef);
    return 0;
}