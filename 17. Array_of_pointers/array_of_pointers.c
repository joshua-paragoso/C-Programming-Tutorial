/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   array_of_pointers.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 10:27 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Learning how to use array with pointers
 */
int main(int argc, char** argv) {

    int val_array[3] = {30,40,50};
    //array to store val_array values
    int *pointer_array[3];
    
    for(int i = 0;i < 3;i++)
    {
        //assign the address of array elements
        pointer_array[i] = &val_array[i];
    }
    
    for(int i = 0; i < 3;i++)
    {
     //access the array element
     printf("Value of val_array[%d]= %d\n",i,*pointer_array[i] );   
        
    }
    return (EXIT_SUCCESS);
}

