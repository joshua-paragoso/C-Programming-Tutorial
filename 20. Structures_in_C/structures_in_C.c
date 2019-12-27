/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   structures_in_C.c
 * Author: Joshua Paragoso
 *
 * Created on August 22, 2019, 11:34 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * using structs in C
 */

struct student{
    int id;
    char name[20];
    float percentage;
}record1;
int main(int argc, char** argv) {
    //variables defined to use structure
//    struct student record1;
    record1.id = 5;
    strcpy(record1.name, "josh");
    record1.percentage = 70.20;
 
    printf("id = %d, name = %s, percentage = %f\n", record1.id, record1.name, record1.percentage);
    
    struct student record2;
    record1.id = 4;
    strcpy(record1.name, "jake");
    record1.percentage = 4.20;
 
    printf("id = %d, name = %s, percentage = %f\n", record1.id, record1.name, record1.percentage);
    
    return (EXIT_SUCCESS);
}

