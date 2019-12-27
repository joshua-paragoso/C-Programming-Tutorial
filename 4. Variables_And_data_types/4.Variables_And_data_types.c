/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   4.Variables_And_data_types.c
 * Author: desurfergerguru
 *
 * Created on August 15, 2019, 3:01 PM
 * What are variables and how we can declare variables
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Variables are place holders for values
 */
int main(int argc, char** argv) {
    //data types
    //this is the declaration of variable
    //variable to use some variable
    int age = 21;
    printf("The integer number is %d\n", age);
    
    //rules of declaring variables
    /*
     2foo (cannot start with a number)
     my foo (space not allowed in names)
     $foo ($ is not allowed, only letters, digits and '_')
     while (language keywords cannot be used as names) 
     */
    
    //decimal variables
    float num = 21.0;
    printf("The float number is %f\n",num);
    
    //character variables
    char my_char = 'a';
    printf("The character is %c\n", my_char);
    
    //double variable
    double num2 = 3.14;
    printf("The double number is %d\n", num2);
    return (EXIT_SUCCESS);
}

