//
//  main.c
//  prob2.1
//
//  Use sizeof() operator to print the sizes of the basic
//  and some composed data types to screen
//
//  Created by Thanh C. Tran on 24/11/15.
//  Copyright © 2015 Thanh C. Tran. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char c = 'A';
    printf("Size of char: %lu bytes\n", sizeof(c));
    
    int integer = 1;
    printf("Size of int: %lu bytes\n", sizeof(integer));
    
    short short_integer = 1;
    printf("Size of short: %lu bytes\n", sizeof(short_integer));
    
    long long_integer;
    printf("Size of long: %lu bytes\n", sizeof(long_integer));
    
    long long longlong_integer;
    printf("Size of long long: %lu bytes\n", sizeof(longlong_integer));
    
    float f;
    printf("Size of float: %lu bytes\n", sizeof(f));
    
    double df;
    printf("Size of double: %lu bytes\n", sizeof(df));
    
//    void v;
//    printf("Size of void: %lu\n", sizeof(v));
    
    enum weekdays {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Staturday,
        Sunday
    } wd;
    printf("Size of enum weekday: %lu bytes\n", sizeof(wd));
    printf("Size of enum weekday: %lu bytes\n", sizeof(enum weekdays));
    
    struct Student {
        char name[20];
        int birthyear;
        char gender;
        int schoolyear;
    };
    printf("Size of struct Student: %lu bytes\n", sizeof(struct Student));
    
    typedef struct {
        char name[20];
        int birthyear;
        char gender;
        int house_num;
    } People;
    printf("Size of typdef People: %lu bytes\n", sizeof(People));
    
    char* str_name = "Thanh C. Tran";
    printf("Size of a string: %ld bytes\n", sizeof(char)*strlen(str_name));
    printf("Size of a pointer: %ld bytes\n", sizeof(str_name));
    
    int* ptr;
    printf("Size of a pointer: %ld bytes\n", sizeof(ptr));
    
    int array1[5];
    int array2[] = {1, 2, 3, 4};
    printf("Size of a array array1[5]: %ld bytes\n", sizeof(array1));
    printf("Size of a array array2[] = {1, 2, 3, 4}: %ld bytes\n", sizeof(array2));

    union color {
        long a;
        int b;
    };
    printf("Size of a specific union: %ld bytes\n", sizeof(union color)); // max(sizeof(a), sizeof(b))
    
    typedef struct {
        char name[20];
        unsigned int age;
        enum gender {Male, Female} gen;
        struct Address {
            char city[20];
            char stress[20];
            int number;
        } addr;
    } Student_Info;
    printf("Size of a composed type: %ld bytes\n", sizeof(Student_Info));
    
    printf("Hello, World!\n");
    return 0;
}
