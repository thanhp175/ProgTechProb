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
    
    printf("Hello, World!\n");
    return 0;
}
