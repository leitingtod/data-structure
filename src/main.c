#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static char *seperator ="--------------------------";

void test_linklist() {
	LinkList *head;
	int i;

	printf("%s init\n", seperator);
	head = linklist_init();

	for(i=0; i<10; i++) {
		linklist_append(head, i);
	}

	linklist_iter(head);

	printf("%s find elem's val == 2\n", seperator);
	linklist_find(head, 2);

	printf("%s get elem's pos == 2\n", seperator);
	linklist_get(head, 2);

	printf("%s remove elem's val == 1\n", seperator);
	linklist_remove(head, 1);
	linklist_iter(head);

	printf("%s insert elem's val=8 in pos 2\n", seperator);
	linklist_insert(head, 8, 2);
	linklist_iter(head);

	printf("%s insert elem's val=8 in pos 1\n", seperator);
	linklist_insert(head, 98, 1);
	linklist_iter(head);


	printf("%s delete elem in pos 2\n", seperator);
	linklist_delete(head, 2);
	linklist_iter(head);

	printf("%s insert elem's val=99 in pos 1\n", seperator);
	linklist_insert(head, 99, 1);
	linklist_iter(head);
}

int main(int argc, char **argv) {
	test_linklist();
	return 0;
}
