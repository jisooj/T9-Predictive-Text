# T9-Predictive-Text

Implmented with C; T9.c has main function.

Standard keypad in a cell phone has each digit corresponding to 3 to 4 alphabets mapped as following: 

       2 ABC 3 DEF 
       4 GHI  5 JKL 6 MNO 
       7 PQRS 8 TUV 9 WXYZ

1 represents a set of special symsbols such as { , . ! ? } and 0 represents a space. 

Pressing a number sequence will create a list of possible words (found in the given dictionary) that can be formed from the sequence. For instance, a sequene 2665 represents "book", "cool", etc. The word "book" will appear first and the user can press "#" to navigate to the next word. 

T9 predictive text is implemented with Trie data structure such that each node stores at most 8 pointers to different nodes. 
