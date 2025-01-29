#include<iostream>
#include<string>
#include<vector>  // For using vectors

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode* next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode* next) : val(x), next(next) {}
 * };
 */

struct ListNode {  // Definition of ListNode struct
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify the merging process
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        // Traverse both lists while neither is empty
        while (list1 && list2) {
            if (list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        // Attach the remaining part of the list (if any)
        cur->next = list1 ? list1 : list2;

        // The head of the merged list is the next node of the dummy
        ListNode* head = dummy->next;
        delete dummy; // Free the dummy node
        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a new ListNode from a vector of values
ListNode* createList(const vector<int>& values) {
    ListNode* head = new ListNode(values[0]);
    ListNode* temp = head;
    for (int i = 1; i < values.size(); ++i) {
        temp->next = new ListNode(values[i]);
        temp = temp->next;
    }
    return head;
}

int main() {
    // Create two sorted linked lists
    vector<int> list1_vals = {1, 2, 4};
    vector<int> list2_vals = {1, 3, 4};

    ListNode* list1 = createList(list1_vals);
    ListNode* list2 = createList(list2_vals);

    Solution sol;
    // Merge the two lists
    ListNode* mergedList = sol.mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
