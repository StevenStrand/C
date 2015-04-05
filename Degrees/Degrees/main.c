//
//  main.c
//  Degrees
//
//  Created by Steven Strand on 4/5/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a global variable and Initialize lastTemperature to 50 Degrees
static float lastTemperature = 50.0;

float fahrenheitFromCelsius(float cel) {
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInfF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInfF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return EXIT_SUCCESS;
}
