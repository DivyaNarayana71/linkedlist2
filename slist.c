#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include<stdio.h>
#include "slist.h"

slist slist_new()
{
	slist s = {NULL, NULL, 0};
	return s;
}

static Node* slist_new_node(int32_t element)
{
	Node *new_node = (Node*) malloc(sizeof(Node));
	new_node -> data = element;
	new_node -> next = NULL;
	return new_node;
}

slist* slist_add_head(slist *list,int32_t element)
{
    assert(list!=NULL);
    Node *new_node = slist_new_node(element);
    new_node->next = list->head;
    list->head = new_node;
    if(list->tail == NULL)
    {
    	list->tail=new_node;
    }
    ++list->length;
    assert((list->length==1 && list->head==list->tail) || (list->length>0 && list->head!=list->tail));
    return list;
}

slist* slist_display(slist *list)
{
    Node *temp;
    int count=0;

    if(list->head == NULL)
    {
        printf("List is empty.");
        return list;
    }

    temp = list->head;
    while(temp != NULL)
    {
        count=count+1;
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;

    }
     printf("length of list: %d\n",count);
 }

uint32_t slist_length(slist *list)
{
    assert(list!=NULL);
    return list->length;
}