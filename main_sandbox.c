// Programmer: Miles Brandt
// Date: 20220227
// File: main_sandbox.c
// Description: This is going to be the varible-less sandbox for support files.

#include "bitwise_operands.c"

void main (){
    printf("The output for xor is: %d.\n", get_xor());
    printf("The output for or proper is %d.\n", get_or());
    printf("Exclusive \"or\" operations may only work with 2 operators.\n");
    printf("If the test succeeds, value should be A (10): %d", get_xor_test());
    return;
}