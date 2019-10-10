#include <assert.h>
#include "slist.h"

void test_empty_list()
{
	slist s = slist_new();
	slist *list = &s;
	assert (slist_length(list) == 0);
}

int main()
{
	test_empty_list();
	slist s = slist_new();
	slist *list = &s;
	int arrayOfEle[] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		list = slist_add_head(list, arrayOfEle[i]);
	}
	slist_display(list);

	return 0;
}