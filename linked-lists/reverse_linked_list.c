#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int value;
    struct ListNode *next;
} ListNode;

ListNode *reverse_list(ListNode *head) {
    ListNode *previous = NULL;
    while (head != NULL) {
        ListNode *next = head->next;
        head->next = previous;
        previous = head;
        head = next;
    }
    return previous;
}

int main(void) {
    ListNode third = {3, NULL};
    ListNode second = {2, &third};
    ListNode first = {1, &second};
    ListNode *reversed = reverse_list(&first);
    assert(reversed->value == 3 && reversed->next->value == 2 && reversed->next->next->value == 1);
    assert(reversed->next->next->next == NULL);

    assert(reverse_list(NULL) == NULL);
    puts("Reverse Linked List: 2 tests passed");
    return 0;
}
