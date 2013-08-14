#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PAGE = 2
#define MAX_WORD = 21

typedef struct node{
	char letter;
	int depth;
	long left;
	long right;
}node;

typedef struct record{
	char word[21];
}record;


bool insert(node* trie, record* rec, FILE* file, int legth){
	
	if(!trie){
		node* n = (node*)malloc(sizeof(node));
		n->letter = rec->word[0];
		n->depth = 1;
		n->left = 0;
		n->right = 0;
		
		trie = (node*)malloc(sizeof(node));
		trie[0] = *n;
		
		return true;
	}
	return false;
}

int main(int argc, char **argv){
	char op;	
	scanf("%c",&op);
	
	while (op != 'e') {
		switch (op) {
			case 'i':
				break;
			case 't':
				break;
			case 'a':
				break;
			case 'r':
				break;
			case 'f':
				break;
			case 'o':
				break;
			case 'p':
				break;
			case 'd':
				break;
			case 'e':
				return 0;
				break;
			default:
				break;
		}
		scanf("%c",&op);
	}
	
	return 0;
}

