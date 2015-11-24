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
    printf("Size of char: %lu\n", sizeof(c));
    
    int integer = 1;
    printf("Size of int: %lu\n", sizeof(integer));
    
    printf("Hello, World!\n");
    return 0;
}
