/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in th; editor.
 */

/* 
 * File:   functions.c
 * Author: Joshua Paragoso
 *
 * Created on August 20, 2019, 10:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Basic concepts of fucntions
 */
//prototype
void add();

//this code is called from main
//since calling from main, this will execute
//based on how many times its called
void add(){
printf("Sum = %d\n", 10+62);  
printf("Were inside the function\n"); 
    
}
int main(int argc, char** argv) {
    
    //function is called three times
    add();
    add();
    add();
    return (EXIT_SUCCESS);
}

