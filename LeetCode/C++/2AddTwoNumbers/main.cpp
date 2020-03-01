#include <iostream>

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int elem1 = 0, elem2 = 0;
        int base = 1;
        int carry = 0;
        ListNode* l3 = NULL;
        ListNode** dum_node= &l3;
        while(l1 || l2 || carry){
            if(l1){
                carry += l1 -> val;
                l1 = l1->next;
            }

            if(l2){
                carry += l2 -> val;
                l2 = l2->next;
            }
            * dum_node = new ListNode(carry%10);
            carry/=10;
            dum_node = &((*dum_node)->next);
        }
        // l3 = (*dum_node);
        return l3;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    int input1[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    int input2[] = {5, 6, 4};

    ListNode* i1_LN = NULL;
    ListNode* i2_LN = NULL;
    ListNode** dum_num1 = &i1_LN;
    ListNode** dum_num2 = &i2_LN;
    for(int &x : input1){
        (* dum_num1) = new ListNode(x);
        dum_num1 = &((*dum_num1)->next);
    }

    for(int &x : input2){
        (* dum_num2) = new ListNode(x);
        dum_num2 = &((*dum_num2)->next);
    }

    Solution mySoluion;
    ListNode* ans = mySoluion.addTwoNumbers(i1_LN, i2_LN);

    return 0;
}