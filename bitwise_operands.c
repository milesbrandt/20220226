// Programmer: Miles Brandt
// Date: 20220227
// File: bitwise_operands.c
// Description: Getting to know the operators for C.

#include <stdio.h>
#include <math.h>

#define F_ZERO 0xF0
#define F_A 0xFA
#define F_5 0xF5

unsigned char get_xor() {
  return F_ZERO ^ F_A ^ F_5;
}

unsigned char get_or() {
    return F_ZERO | F_A | F_5;
}

// The above two operations are equivalent, because of order of operations.
// i.e. 0xF0 ^ 0xFA = 0x0A, 0x0A ^ 0xF5 = 0xFF = 255.
// The three literals are not xor'd simultaneously. This may be possible
// in a bit-by-bit fashion, write a function for this.

unsigned char get_xor_test() {
    return 0xF ^ 0x5;
}

// TODO: Write a bitwise xor for 3 opreators.
// Update, this will require pointers. 

/*
unsigned char get_3xor(unsigned char a, unsigned char b, unsigned char c){
    unsigned char* return_val = 0x00;
    return_val 
}
*/