/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   switch_statements.c
 * Author: Joshua Paragoso
 *
 * Created on August 20, 2019, 10:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * basic concepts of switch statments
 */
int main(int argc, char** argv) {
    
    //marks will evaluate how the student is doing
    int marks;
    printf("Enter grade:");
    scanf("%d", &marks);
    //expression: what you want to validate the expression of some case
    switch(marks)
    {
        //cases: condition or constant expression
        //statement: code you want to execute
        //after statement is completed, program should breakcase 90:
        case 90:
        printf("This is an A");
        break;
        
        case 80:
        printf("This is a B");
        break;
        
        case 70:
        printf("This is a C");
        break;
        
        case 60:
        printf("This is a D");
        break;
        
        //default executes if all the other cases are not executed 
        default:
        printf("This is a F");            
                 
    }
    return (EXIT_SUCCESS);
}

