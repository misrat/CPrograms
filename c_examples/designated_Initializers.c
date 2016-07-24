//
//  designated_Initializers.c
//  CProject
//
//  Created by Tanmay on 6/19/16.
//  Copyright © 2016 TM. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// without designated initializers, "equal" will always be assigned to pos 0, master to pos 1 and slave to pos 2
// with designated initializers - we can choose the array index and assign values to it. 
// This is useful when array indexes have some meaning, and we can assign a string constant to the number(index)
/*const char *arrayOfPointToChars_DI[] = {
    [1]    = "equal",
    [2]    = "master",
    [0]     = "slave",
};*/

#define A 1
#define B 2
#define C 3

const char *arrayOfPointToChars_DI[] = {/* array of pointers to strings */
    [A]    = "alphabet A ",
    [B]    = "alphabet B ",
    [C]    = "alphabet C"
};

//without designated initializers
const char *stringArray[] = {
    "equal",
    "master",
    "slave"
};

int main(){
    printf("%s \n", stringArray[2]);
    printf("Designated Initializer\n %s\n", arrayOfPointToChars_DI[2]); 
    return EXIT_SUCCESS;
}
