/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   passing_parameters.c
 * Author: Joshua Paragoso
 *
 * Created on August 21, 2019, 1:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * passing parameters and return a value
 */
void sum(int a, int b){

int sum = a + b;
printf("Sum = %d\n",sum);
    
}
int main(int argc, char** argv) {
    
    
    //function is called
    sum(5, 5);
    sum(10,30);
    sum(40,70);
    
    //user entry
    int x,y;
    printf("Enter two numbers\n");
    printf("Number1\n");
    scanf("%d", &x);
    printf("Number2\n");
    scanf("%d", &y);
    sum(x,y);
    return (EXIT_SUCCESS);
}