/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   scope_rules.c
 * Author: Joshua Paragoso
 *
 * Created on August 21, 2019, 3:00 PM
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * scope rules in C
 * Global variable: declared not inside a function 
 * local variable: declared inside a function
 * NOTE: local variables can only be used inside
 * the function its created in
 * 
 * Global variable can be used by any function in the program
 */

//global variable
int global = 25;
//global variable always initializes by 0
void NumberPrint(){
printf("Global + 50 = %d\n", global + 50);
}

int main(int argc, char** argv) {
    
    //local variable
    int local = 20;
    printf("local = %d\n", local);
    //local variables are not initialized by 0
    //it can be any number (garbage numbers)
    NumberPrint();
    
    /**
     * 
     * NOTE: if a local and global variable have 
     * the same name, the local variable will
     * have the preference over the global variable
     * in its function  
     */

    
    
    return (EXIT_SUCCESS);
}

