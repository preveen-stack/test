#include <stdio.h>
#include <assert.h>
#include <string.h>

#define NUM_NODES (26)

struct node {
        char name;
        struct node *next;
} ;

struct node* reverse(struct node* head) 
{
    struct node *current = head, *next_next = NULL, *last = head;
    while(current != NULL) {
        last = current;
        struct node *current_next = current->next;

	current->next = next_next;
	next_next = current;
	
        current = current_next;
    }
    return last;
}

void print_linked_list(struct node *head) {
	struct node *temp = head;

	if (head == NULL) {
		printf("list is empty\n");
	}
	do {
		printf("%c %s ", temp->name, temp->next == NULL ? "\n" : "->");
		temp = temp->next;
	} while (temp!=NULL);
}

int main()
{
    struct node nodes[NUM_NODES];
    char names[NUM_NODES] = "abcdefghijklmnopqrstuvwxyz";
    int num_nodes = strlen(names);
    printf("num nodes : %d\n", num_nodes);
    assert(num_nodes == NUM_NODES-1);

    for (int i = 0; i < num_nodes; i++) {
	nodes[i].name = names[i];
        nodes[i].next = (i == num_nodes-1) ? NULL : &nodes[i+1];
    }
   
    print_linked_list(&nodes[0]); 
    printf("reversing\n");
    print_linked_list(reverse(&nodes[0]));
}
