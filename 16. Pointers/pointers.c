  /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pointers.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 10:13 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * basics of pointers
 * pointer: variable whose value is the address
 * of another variable
 */
int main(int argc, char** argv) {

    int val = 30;
  
    //& is the address assigned to the value
    printf("Address of val = %d\n", &val);
    
     //* declares a pointer
    //same as a variable
    int *pointer_p;
    //pointer_p now has the address of val
    pointer_p = &val;
    printf("Value of pointer_p variable = %d\n", pointer_p);
    
    //to get the value of pointer_p, you need the * which points to the value
    //at pointer_p
    printf("value of pointer_p = %d\n", *pointer_p);
    return (EXIT_SUCCESS);
}

