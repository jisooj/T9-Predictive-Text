// CSE 374
// HW 5
// Jisoo Jung
//
// Node.h:
// Interface for a Node struct and related function.

#ifndef NODE_H
#define NODE_H

#define NUM_CHILDREN 8


// It's a single node that stores pointers to children, a word,
// and a next node.
typedef struct node_t {
  char * word;
  struct node_t * next;
  struct node_t ** children;
} Node;


// Initializes trie node with default fields:
// word, next, children[i] = NULL
Node * makeNode();

#endif
