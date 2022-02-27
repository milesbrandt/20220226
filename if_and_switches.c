// Programmer: Miles Brandt
// Date: 20220227
// File: ifs_and_switches.c
// Description: This is a file intended to be a placeholder for things.

#include <stdio.h>
#include <math.h>

unsigned char get_switches(unsigned char a, unsigned char b) {

  switch (a) {
      case 0x00:
        return a | b;
        break;
      case 0x0A:
        return a & b;
        break;
      case 0x0F:
        return a ^ b;
        break;
      default:
        return a;
        break;
  }

}