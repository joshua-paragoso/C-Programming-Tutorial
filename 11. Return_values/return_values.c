/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   return_values.c
 * Author: Joshua Paragoso
 *
 * Created on August 21, 2019, 2:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

//function to return an integer
int product(int x, int y){
    //this will take the two parameters and will
    //make the product of the parameters 
    //and return it as an integer
    return (x * y);
}
/*
 * how to use function to return some value
 * how to return a value of any type
 */
int main(int argc, char** argv) {
    
    //passing two values into function
    int prod1 = product(10,10);
    printf("Product is %d\n", prod1);
    int x,y;
    printf("Enter two numbers\n");
    printf("Number1\n");
    scanf("%d", &x);
    printf("Number2\n");
    scanf("%d", &y);
    //x & y are passed into the function of product
    //this variable holds the value of the function returned
    int prod = product(x,y);
    printf("The product of the two numbers is %d\n", prod);
    return (EXIT_SUCCESS);
}

