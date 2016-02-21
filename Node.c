// CSE 374
// HW 5
// Jisoo Jung
//
// Node.c:
// Implementation of struct node_t, which can be used as 'Node'.
// Allows to create one instance of node.

#include "Util.h"
#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

// Initializes trie node with default feilds:
//   word = '\0'
//   children = pointer to 8 node pointers, each of which
//   reporesents a reference to a child node
Node * makeNode() {
  Node * nodePtr = (Node *) mallocVerif(sizeof(Node));
  nodePtr->word = NULL;
  nodePtr->next = NULL;
  nodePtr->children = (Node **) malloc(NUM_CHILDREN * sizeof(Node *));
  int i;
  for (i = 0; i < NUM_CHILDREN; i++) {
    nodePtr->children[i] = NULL;
  }
  return nodePtr;
}
