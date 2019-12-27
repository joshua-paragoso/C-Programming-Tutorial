/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   passing_pointers_as_function_arguement.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 11:10 AM
 */

#include <stdio.h>
#include <stdlib.h>

//function this takes a address of variable
void getValue(int *my_pointer)
{
    //indirectly assigned pointer to 10000
    //&get_the_value=10000
    *my_pointer = 10000;
    return;
}

//function to add values in array to sum
int getSum(int *array_val, int size){
    int sum = 0;
    for(int i = 0; i < size;i++){
     sum += array_val[i];   
    }
    return sum; 
}
/*
 * passing pointers as a arguments of a function
 */
int main(int argc, char** argv) {

    int get_the_value;
   
    getValue(&get_the_value);
    
    printf("The value of get_the_value = %d", get_the_value);
    
    //passing array pointer to function
    int my_array[4] = {10,20,30,40};
    int mySum = getSum(my_array,4);
    
    printf("The value of my sum is = %d", mySum);
  
    return (EXIT_SUCCESS);
}

