//
//  linkedList.c
//  linkedList
//
//  Created by ursus on 13/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "linkedList.h"

// C does not have a constructor, I like constructors :o)  => create
boolean new (node_t * list) {

    // make sure you do not create any memory errors
    if (!isEmpty(list))
        deleteAll(list);
    
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
    
    // save the pointer to the rest of the list
    newNode->next = list;
    
    // add to the top of the list
    list = newNode;
    
    // finish
    return TRUE;
}

// delete all elements from your list
boolean deleteAll (node_t * list) {

    // preamble
    if (isEmpty (list))
        return TRUE;
    
    // get the top of the list
    node_t * currElement = list;
    
    // now process the list
    node_t * toDelete;
    while (currElement != EOL) {
        toDelete = currElement;
        currElement = currElement->next;
        free (toDelete);
    }
    
    // finished
    return TRUE;
}

// see if your linked list is empty
boolean isEmpty (node_t * list) {
    
    if (list == EMPTY_LIST) {
        return TRUE;
    } else {
        return FALSE;
    }
    
}

// print your list
boolean print (node_t * list) {
    
    // preamble
    if (list == EMPTY_LIST)
        return TRUE;
    
    node_t * currElement;
    int i = 0;
    currElement = list;
    while (currElement != EOL) {
        printf ("Current element number: %d contains %d\n", i, currElement->i);
        currElement = currElement->next;
        i++;
    }
    
    // end
    return TRUE;
}













