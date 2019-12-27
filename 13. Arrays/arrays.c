/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arrays.c
 * Author: Joshua Paragoso
 *
 * Created on August 21, 2019, 3:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * How to use an array in C
 * An array is a variable that contains more than
 * one object of same data type
 */
int main(int argc, char** argv) {
    
    //integer array
    int array[6] = {20,30,60,50,55,30};
   
    //array[2] will access the third number 
    //in the array which is 60
    printf("Number at index 2 is %d\n", array[2]);
    
    //char array
    char charArray [4] = {'a','b','c','d'};
    
    //using for loop to access array and print all contents of array
   for(int i = 0; i<6;i++){
       //prints off each number based on each index
       printf("element[%d] = %d \n",i, array[i]);   
    } 
    return (EXIT_SUCCESS);
}

