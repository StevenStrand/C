//
//  main.c
//  Challenge 4
//
//  Created by Steven Strand on 4/5/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 20;
    int j = 25;
    int k = (i > j) ? 10 : 5;
    
    if (5 < j - k) {
        printf("The first expressiom is true.\n");
    } else if (j > i) {
        printf("The second expression is true.\n");
    } else {
        printf("Neither expression is true.\n");
    }
    
    return 0;
}
