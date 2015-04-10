//
//  main.c
//  BMICalc
//
//  Created by Steven Strand on 4/9/15.
//  Copyright (c) 2015 Steven Strand. All rights reserved.
//

#include <stdio.h>

/*
 For general single use
 struct Person {
 float heightInMeters;
 int weightInKilos;
 };
 */

// Here is the declaration of the type Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person person) {
    return person.weightInKilos / (person.heightInMeters * person.heightInMeters);
}

int main(int argc, const char * argv[]) {
    /*
     Single use reference
     struct Person mikey;
     */
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    /*
     Singe use reference
     struct Person aaron;
     */
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    /*
     Replaced by bodyMassIndex function and call
     printf("Mikey is %.2f meters tall\n", mikey.heightInMeters);
     printf("Mikey weights %d kilograms\n", mikey.weightInKilos);
     printf("Aaron is %.2f meters tall\n", aaron.heightInMeters);
     printf("Aaron weights %d kilograms\n", aaron.weightInKilos);
     */
    
    float bmi;
    bmi = bodyMassIndex(mikey);
    printf("Mikey has a BMI of %.2f\n", bmi);
    
    bmi = bodyMassIndex(aaron);
    printf("Aaron has a BMI of %.2f\n", bmi);
    
    return 0;
}
