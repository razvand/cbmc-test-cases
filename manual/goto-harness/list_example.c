nclude <assert.h>
#include <stdlib.h>

typedef struct linked_list linked_list;
struct linked_list {
    int value;
    linked_list *next;
};

linked_list *global_linked_list;

/// initialize all values in the global
/// list to 0
void initialize_global(void)
{
  for(linked_list *ll = global_linked_list;
    ll != NULL;
    ll = ll->next)
  {
    ll->value = 0;
  }
}

/// try to initialize all values in the linked list
/// to 0 - but this version contains two bugs,
/// as it won't work with nullpointer arguments
/// and it will also not initialize the last element
void initialize_other(linked_list *ll)
{
    do {
        ll->value = 0;
        ll = ll->next;
    } while(ll->next != NULL);
}

void check_list(linked_list *list_parameter)
{
    assert(list_parameter != global_linked_list);
    initialize_global();
    initialize_other(list_parameter);
    linked_list *global_cursor = global_linked_list;
    linked_list *parameter_cursor = list_parameter;

    // global list should be a prefix of the parameter now,
    // or the other way round
    while(global_cursor != NULL && parameter_cursor != NULL)
    {
        // this assertion should fail since we didn't
        // initialize the last element of of the
        // list parameter correctly
        assert(global_cursor->value
          == parameter_cursor->value);
        global_cursor = global_cursor->next;
        parameter_cursor = parameter_cursor->next;
    }
}
