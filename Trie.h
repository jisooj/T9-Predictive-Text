// CSE 374
// HW 5
// Jisoo Jung
//
// Trie.h:
// Interface to trie data structure. Trie here is a variation
// of tree where each node contains 8 children

#ifndef TRIE_H
#define TRIE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Node.h"

#define MAX_WORD_LENGTH 100
#define NUM_ALPHABET 26

// Inserts the given word to trie, modifying the structure if necessary
void insert(Node * root, char * word);

// Ruilds trie with words in the specified file.
// prints error message if it's not a valid file.
Node * build(FILE * fp);

// Returns a node that contains dictionary word which corresponds
// to the given key sequence. Returns NULL if the keySeq is invalid
Node * search(char * keySeq, Node * root);

// Returns 0-7 child index that corresponds with the given letter
int getChildIndex(char letter);

// Clears/frees the given node and its children.
void clear(Node * node);

// Frees the linked list of node with the given front
void freeList(Node * front);

// Frees a node referenced by the given node pointer
void freeNode(Node * node);

// Prints the given trie in preorder
void printTrie(Node * root, int level);

// Prints the numTabs many tabs
void printTabs(int numTabs);

#endif
