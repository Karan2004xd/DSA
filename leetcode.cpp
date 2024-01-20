#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int length(ListNode *head) {
        int i = 0;
        while (head != nullptr) {
            i++;
            head = head->next;
        }
        return i;
    }

    int search(ListNode *head, int val) {
        int i = 0;
        while (head != nullptr) {
            if (head->val == val) return i;
            head = head->next;
            i++;
        }
        return -1;
    }

    ListNode* removeElements(ListNode* head, int val) {
        if (head != nullptr) {
            int size = length(head);
            int index = search(head, val);

            while (index != -1) {
                if (index <= 0) {
                    head = head->next;
                } else if (index >= size - 1) {
                    ListNode *temp_node = head;
                    for (int i = 0; i < size - 1; i++) {
                        temp_node = temp_node->next;
                    }
                    temp_node->next = nullptr;
                } else {
                    ListNode *temp_node = head;
                    for (int i = 0; i < index - 1; i++) {
                        temp_node = temp_node->next;
                    }
                    temp_node->next = temp_node->next->next;
                }
                size--;
                index = search(head, val);
            }
        }
        return head;
    }
};

int main() {
    Solution s;
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(20);
    head->next->next->next = new ListNode(30);
    
    head = s.removeElements(head, 20);
    while (head != nullptr) {
        std::cout << head->val << std::endl;
        head = head->next;
    }
    return 0;
}
