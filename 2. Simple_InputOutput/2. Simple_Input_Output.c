/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   2. Simple_Input_Output.c
 * Author: desurfergerguru
 *
 * Created on August 15, 2019, 3:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // \n changes the line
    printf("Hello world\n");
    printf("Hello world\n");
    printf("Hello world\n");

////////printing a number
    //%d is a place holder for integers
    printf("%d\n", 32);

/////////printing decimal
    //%f is a place holder for decimals
    printf("%f\n", 32.2);
    
////////printing multiple decimals
    printf("%d %d %d\n", 32,58,9);

    
    printf("%d\n",32);//integer
    printf("%f\n",32.2);//float
    printf("%c\n",'a');//char 
    printf("%s\n", "Hello world!");//sentence
    printf("%x\n", 16);//hex
    
    //user input
//    scanf("%s\n,    ");
    
    //puts function
    //prints value to screen
    puts("this is my C program\n");
    return (EXIT_SUCCESS);
}

