#include "headers.h"

int main(void)
{
    friend_t *head;
    friend_t bob = {"Bob", 8675309, NULL};

    head = &bob;
    print_friends(head);
}