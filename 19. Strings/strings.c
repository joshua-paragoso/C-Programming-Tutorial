/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* using
 * File:   strings.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 11:22 AM
 */

#include <stdio.h>
#include <stdlib.h>
//this enables use of string functions
#include <string.h>

/*
 * how to use strings in C
 * String: single dimensional array of characters
 * terminated by null characters
 * \o is null terminated character. Means the end of the array
 * 
 */
int main(int argc, char** argv) {
//two different strings
    
    //my_string is a definitive sized array
    char my_string[6] = { 'H','e','l','l','o','\0'};
    //my_other_string will have a non definitive size
    char my_other_string[] = "Hello";
    
    printf("my string value = %s\n", my_string);
    printf("my other string value = %s\n", my_other_string);

    char string1[12] = "hello";
    char string2[12] = "world";
    char string3[12];
    
    //allows to copy contents of string1 to string 3
    strcpy(string3, string1);//strcpy(dest, source)
    
    //adds string1 to string2
    strcat(string1,string2); //add string2 to string1
    
    //this gives the length of the string
    int length_string1 = strlen(string1);
    
    printf("strycpy = %s\n", string3);
    printf("strcat = %s\n", string1);
    printf("strlen = %d\n", length_string1);

    return (EXIT_SUCCESS);
}

