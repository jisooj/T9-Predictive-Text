// CSE 374
// HW 5
// Jisoo Jung
//
// T9.c:
// This is a T9 predictive text program where it uses numbered key
// sequence to provide possible word from a dictionary. The program
// prompts the user to input a key sequence which is mapped like
// the following :
//
// 2 ABC
// 3 DEF
// 4 GHI
// 5 JKL
// 6 MNO
// 7 PQRS
// 8 TUV
// 9 WXYZ
//
// For example, when the user enters '2665', the word "book"
// and "cool" are possible options. If multiple words share
// the same key sequence, these can be differentiated by appending
// pound symbol(s) (#) next to the key sequence, or # can be
// entered separately right after the key sequence is entered.

#include "Util.h"
#include "Trie.h"

// Need one argument as a dictionary. Any additional argument
// will be ignored. Prompts the user for key sequence until
// 'exit' is entered.
int main(int argc, char * argv[]) {
  if (argc < 2) {
    printf("Need file arg\n");
    return 1;
  }
  FILE * fp = fopen(argv[1], "r");
  if (!fp) {
    printf("File not found.");
    return 1;
  }
  Node * root = build(fp);
  fclose(fp);
  char * input = (char *) mallocVerif(MAX_WORD_LENGTH);
  Node * wordNode = NULL;

  printf("Enter \"exit\" to quit.\n");
  printf("Enter Key Sequence (or \"#\" for next word):\n");
  while (fgets(input, MAX_WORD_LENGTH, stdin) &&
         strncmp("exit\n", input, strlen(input))) {
    // filter out word with # as first character
    if (isdigit(input[0])) {
      wordNode = search(input, root);
    }
    char * poundPtr = strstr(input, "#");
    while (poundPtr && *poundPtr == '#' && wordNode) {
      wordNode = wordNode->next;
      poundPtr++;
    }
    if (wordNode && wordNode->word) {
      printf("        '%s'\n", wordNode->word);
    } else {
      printf("        There are no more T9onyms\n");
    }
    printf("Enter Key Sequence (or \"#\" for next word):\n");
  }
  free(input);
  clear(root);
  return 0;
}
