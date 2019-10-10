#ifndef _INCLUDED_SLIST
#define _INCLUDED_SLIST_
#include<stdint.h>

typedef struct _node_ Node;
typedef struct _slist_ slist;

struct _node_
{
	int32_t data;
	Node *next;
};

struct _slist_
{
	Node *head;
	Node *tail;
	uint32_t length;
};

/* public interfaces for users, functions for users*/
slist slist_new();
slist* slist_add_head(slist *list, int32_t element);
slist* slist_display(slist *list);
uint32_t slist_length(slist *list);

#endif