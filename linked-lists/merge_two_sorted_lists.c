#include <assert.h>
#include <stdio.h>

typedef struct ListNode {
    int value;
    struct ListNode *next;
} ListNode;

ListNode *merge_two_lists(ListNode *first, ListNode *second) {
    ListNode sentinel = {0, NULL};
    ListNode *tail = &sentinel;
    while (first != NULL && second != NULL) {
        if (first->value <= second->value) {
            tail->next = first;
            first = first->next;
        } else {
            tail->next = second;
            second = second->next;
        }
        tail = tail->next;
    }
    tail->next = first != NULL ? first : second;
    return sentinel.next;
}

int main(void) {
    ListNode first_four = {4, NULL};
    ListNode first_two = {2, &first_four};
    ListNode first_one = {1, &first_two};
    ListNode second_four = {4, NULL};
    ListNode second_three = {3, &second_four};
    ListNode second_one = {1, &second_three};
    ListNode *merged = merge_two_lists(&first_one, &second_one);
    int expected[] = {1, 1, 2, 3, 4, 4};
    for (int index = 0; index < 6; index++) {
        assert(merged != NULL && merged->value == expected[index]);
        merged = merged->next;
    }
    assert(merged == NULL);
    assert(merge_two_lists(NULL, NULL) == NULL);
    puts("Merge Two Sorted Lists: 2 tests passed");
    return 0;
}
