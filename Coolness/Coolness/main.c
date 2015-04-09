//
//  main.c
//  Coolness
//
//  Created by Steven Strand on 4/8/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#import <readline/readline.h>
#import <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Who is cool? ");
    const char *name = readline(NULL);
    printf("%s is cool!\n\n", name);
    
    printf("Where should I start counting? ");
    const char *numInput = readline(NULL);
    int num = atoi(numInput);
    for (num; num>-1; num-=3) {
        printf("%d\n", num);
        if ((num % 5) == 0) {
            printf("Found One!\n");
        }
    }
    
    return 0;
}
