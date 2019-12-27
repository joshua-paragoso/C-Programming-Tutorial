/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   6.If_Statements.c
 * Author: desurfergerguru
 *
 * Created on August 15, 2019, 3:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Use if statements to check the conditions to see if true to execute 
 * specific code 
 */
int main(int argc, char** argv) {
    
   /* if ( condition) {
    if the condition is true the code will execute
    }
    */
    
    int age;
    printf("Please enter age: ");
    //'&' is the address where the value is stored
    //indicates that your scanning the variable which is age
    scanf("%d", &age);
    
    if(age > 18){
        printf("The age is greater than 18");
    }
    
    // '==' compares two values
    if(age == 18){
       printf("The age is equals to 18");   
    }
    
    if(age < 18){
        printf("The age is less than 18");
    }
    return (EXIT_SUCCESS);
}

