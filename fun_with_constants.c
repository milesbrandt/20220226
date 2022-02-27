// Programmer: Miles Brandt
// Date: 20220226
// File: fun_with_constants.c
// Description: I'm just trying to figure out conding practices in C.

#include "support_func.c"

#define AGE 25
#define FAVORITE_COLOR "Purple"
#define OCCUPATION "RTG"
#define FIRST_NAME "Miles"
extern int c_important;
void main(){
  register int c_important;
//int mlength[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  c_important = AGE + 1;
  printf("Good evening. My name is %s.\n", FIRST_NAME);
  printf("I'm %d years old, and I work at %s.\n", AGE, OCCUPATION);
  printf("Next year, I will be %d years old. \n", c_important);

  printf("There are %d days in my birth month. \n", MLENGTH[BIRTHMM - 1]);

  return;
}