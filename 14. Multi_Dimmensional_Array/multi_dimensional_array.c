/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   multi_dimensional_array.c
 * Author: Joshua Paragoso
 *
 * Created on August 21, 2019, 3:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *  using multi dimmensional array
 */
int main(int argc, char** argv) {
     
  int array[2][3] = {
      //2 rows
      //3 columns
      {20,30,60},
      {50,55,30}
  };
   
  //using for loop to print 
  //you need two for loops to access the multi dimensional array
  //one for rows
  //one for columns
   for(int i = 0; i<2;i++){
       for(int j=0;j<3;j++){
       printf("Array[%d][%d]=%d\n", i,j, array[i][j]);
    }
   }
  return (EXIT_SUCCESS);
}

