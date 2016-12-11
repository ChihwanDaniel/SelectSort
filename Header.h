#ifndef _HEADER_H_
#define _HEADER_H_

typedef struct _node {
	int data;
	struct _node * next;
} Node;

typedef struct _list {
	Node * head;
	Node * tail;
	Node * cur;
} List;

void init_list(List *);
void add_to_list(List *, Node *);
void print_list(List *);
void sort_list(List *);
void delete_list(List *);
#endif