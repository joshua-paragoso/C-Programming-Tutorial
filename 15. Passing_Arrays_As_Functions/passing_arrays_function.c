/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   passing_arrays_function.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 9:51 AM
 */

#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[], int size){
   int sum = 0; 
   
   //using for loop to add the array value to sum
   for(int i = 0; i < size;i++)
   {
       sum += array[i];
   }
   return sum;
}
/*
 * passing arrays into functions
 */
int main(int argc, char** argv) {
    
    int array[6] = {20,30,28,19,45,10};
    //sum will equal arrayFunction
    int sum = arraySum(array,6);
    printf("sum of array %d\n",sum);
     
    return (EXIT_SUCCESS);
}

