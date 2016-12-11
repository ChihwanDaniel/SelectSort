#include <stdio.h>
#include "Header.h"

void init_list(List *list) {
	list->head = NULL;
	list->tail = NULL;
	list->cur = NULL;
}

void add_to_list(List *list, Node *node) {
	if (list->head == NULL) {
		list->head = node;
		list->tail = node;
	}
	else {
		list->tail->next = node;
		list->tail = node;
	}
}

void print_list(List *list) {
	Node *node;

	if (list->head == NULL) {
		printf("리스트가 비어있습니다.\n");
		return;
	}
	node = list->head;

	printf("%d->", node->data);

	while (node->next) {
		node = node->next;
		printf("%d->", node->data);
	}
	printf("NULL\n");
}

void sort_list(List *list) {
	/* Use the select sort algorithm */
}
void delete_list(List *list) {
	/* delete all of the nodes */
}