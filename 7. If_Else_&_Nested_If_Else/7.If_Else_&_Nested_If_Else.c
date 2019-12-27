/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   7.If_Else_&_Nested_If_Else.c
 * Author: desurfergerguru
 *
 * Created on August 15, 2019, 3:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * How to use if else statements in C
 * How to use nested if else statements in C
 */
int main(int argc, char** argv) {
    int age;
    printf("Please enter age: ");

    scanf("%d", &age);
    
    if(age > 18){
        printf("The age is greater than 18");
    }
        //nested if statement
        //this is inside a if statement
        if( age < 21){
           printf("The age is greater than 18 but not less than 21"); 
        }//else if checks another condition if needed
    else if( age == 18){
       printf("The age is equal to 18");   
    }//else statement executes the other pieces of code
    //that is not satisfied by the condition
    else{
       printf("The age is  not greater than 18");   
    }
  
    return (EXIT_SUCCESS);
}

