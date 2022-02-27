// Programmer: Miles Brandt
// Date: 20220227
// File: main_sandbox.c
// Description: This is going to be the varible-less sandbox for support files.

#include "bitwise_operands.c"
#include "if_and_switches.c"

void main (){
    printf("The output for xor is: %d.\n", get_xor());
    printf("The output for or proper is %d.\n", get_or());
    printf("Exclusive \"or\" operations may only work with 2 operators.\n");
    printf("If the test succeeds, value should be A (10): %d\n", get_xor_test());
    printf("The value of this should be 0x02. It is: %d.\n", get_switches(0x0A, 0xF7));
    printf("The value of this should be 0x0A. It is: %d.\n", get_switches(0x00, 0x0A));
    printf("The value of this should be 0x0A. It is: %d.\n", get_switches(0x0F, 0x05));
    return;
}