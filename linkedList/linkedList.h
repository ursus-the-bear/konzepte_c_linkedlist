//
//  linkedList.h
//  linkedList
//
//  Created by ursus on 13/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//
#ifndef linkedList_h
#define linkedList_h

#define FALSE 0
#define TRUE (!FALSE)
#define EOL 0
#define EMPTY_LIST 0

typedef int boolean;

typedef struct node {
    int i;
    struct node *next;
} node_t;


// my functions
boolean new (node_t * list);
boolean create (node_t * list);
boolean add (node_t * list, int i);
boolean deleteAll (node_t * list);
boolean isEmpty (node_t * list);
boolean print (node_t * list);


#endif /* linkedList_h */
