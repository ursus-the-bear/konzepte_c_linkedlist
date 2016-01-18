//
//  main.c
//  linkedList
//
//  Created by ursus on 13/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include <stdio.h>
#include "linkedList.h"

int main(int argc, const char * argv[]) {
    
    node_t * myList;
    myList = EMPTY_LIST;

    // call the constructor because I have one
    new (myList);
    
    // now add a couple of elements
    add (myList, 1);
    add (myList, 2);
    add (myList, 3);
    
    // and print the list
    print (myList);
    
}
