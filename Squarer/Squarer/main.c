//
//  main.c
//  Squarer
//
//  Created by Steven Strand on 4/5/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

static int number = 5;

int squared(float num) {
    return num * num;
}

int main(int argc, const char * argv[]) {
    printf("\"%i\" squared is \"%i\".\n", number, squared(number));
    return 0;
}
