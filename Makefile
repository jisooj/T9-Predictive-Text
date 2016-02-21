# Makefile for t9 Trie program
# CSE 374
# HW 5
#
# Jisoo Jung


trie: Util.o Node.o Trie.o T9.o 
	gcc -Wall -g -std=c11 -o trie Util.o Trie.o Node.o T9.o

Util.o: Util.c Util.h
	gcc -Wall -g -std=c11 -c Util.c

Node.o: Node.c Node.h Util.h 
	gcc -Wall -g -std=c11 -c Node.c

Trie.o: Trie.c Trie.h Node.h Util.h
	gcc -Wall -g -std=c11 -c Trie.c

T9.o: T9.c Trie.h Node.h Util.h
	gcc -Wall -g -std=c11 -c T9.c

clean: 
	rm -f *.o trie 
