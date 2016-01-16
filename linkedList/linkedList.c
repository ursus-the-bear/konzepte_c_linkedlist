//
//  linkedList.c
//  linkedList
//
//  Created by ursus on 13/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include "linkedList.h"
#include <stdlib.h>

// C does not have a constructor, I like constructors :o)  => create
boolean new (node_t * list) {

    // TODO - check if the list is really emtpy
    
    // initialize the list to empty
    list = EMPTY_LIST;
    return TRUE;
    
}

// need to have a create
boolean create (node_t * list) {
    
    return new (list);
    
}

// add an element to your list
boolean add (node_t * list, int i) {
    
    // create a new node with your values
    node_t * newNode;
    newNode = malloc(sizeof(node_t));
    newNode->i = i;
    newNode->next = list;
    
    // add to the top of the list
    list = newNode;
    
    return TRUE;
    
}

// delete all elements from your list
boolean deleteAll (node_t * list) {

    // preamble
    if (isEmpty (list)) return TRUE;
    node_t * currElement = list;
    
    while (currElement->next != EOL) {
     //   toDelete = currElement;
 //       currElement = currElement->next;
   //     free (toDelete);
   // }
    
    
    return TRUE;
    
}

// see if your linked list is empty
boolean isEmpty (const node_t * list) {
    
    if (list == EMPTY_LIST) {
        return TRUE;
    } else {
        return FALSE;
    }
    
}
