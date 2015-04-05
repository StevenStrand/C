//
//  main.c
//  Triangle
//
//  Created by Steven Strand on 4/5/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float AngleA, float AngleB) {
    float triangle = 180.0;
    float AngleC = triangle - (AngleA + AngleB);
    
    return AngleC;
}

int main(int argc, const char * argv[]) {
    float AngleA = 30.0;
    float AngleB = 60.0;
    float AngleC = remainingAngle(AngleA, AngleB);
    printf("The third angle is %.2f\n", AngleC);
    return 0;
}
