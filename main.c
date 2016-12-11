#include <stdio.h>
#include <time.h>
#include "Header.h"

int main(void) {
	List my_list;
	Node * new_node;
	int number, i;
	srand(time(NULL));
	init_list(&my_list);

	for (i = 0; i < 10; i++) {
		number = rand() % 10;
		printf("number = %d\n", number);
		new_node = (Node *)malloc(sizeof(Node));
		new_node->data = number;
		new_node->next = NULL;
		add_to_list(&my_list, new_node);
	}
	print_list(&my_list);

	sort_list(&my_list);
	print_list(&my_list);

	delete_list(&my_list);
	return 0;
}