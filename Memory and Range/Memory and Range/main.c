//
//  main.c
//  Memory and Range
//
//  Created by Steven Strand on 4/8/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // signed values (in two's complement) - one bit for the sign
    char charMinValue = 0x80;
    char charMaxValue = ~charMinValue; // 0x7f;
    
    
    printf ("char: [min, max] = [%d, %d]\n", charMinValue, charMaxValue);
    
    // unsigned values - no sign bit
    unsigned char ucharMinValue = 0;
    unsigned char ucharMaxValue = 0xff;
    
    printf ("unsigned char: [min, max] = [%u, %u]\n", ucharMinValue, ucharMaxValue);
    
    // signed values (in two's complement) - one bit for the sign
    short shortMinValue = 0x8000;
    short shortMaxValue = ~shortMinValue; // 0x7fff;
    
    printf ("short: [min, max] = [%d, %d]\n", shortMinValue, shortMaxValue);
    
    // unsigned values - no sign bit
    unsigned short ushortMinValue = 0;
    unsigned short ushortMaxValue = 0xffff;
    
    printf ("unsigned short: [min, max] = [%u, %u]\n", ushortMinValue, ushortMaxValue);
    
    printf("Minimum value of a signed short is %d\n", SHRT_MIN);
    printf("Maximum value of a signed short is %d\n", SHRT_MAX);
    printf("Minimum value of an unsigned short is %d\n", 0);
    printf("Maximum value of an unsigned short is %d\n", USHRT_MAX);

}
