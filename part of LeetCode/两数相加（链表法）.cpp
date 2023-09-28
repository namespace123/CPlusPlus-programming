#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };*/
fo'rfo'r
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int m = 0, n = 0;
        for(ListNode a: l1){
            m++;
        }
        for(ListNode b: l2){
            n++;
        }
        if(m > n){
            int offset = m - n;
            for(int i = 0; i < offset; i++){
                ListNode temp(0);
                temp->next = l1;
                l1 = temp;
            }
            n = m;
        }else(n > m){
            int offset = n - m;
            for(int i = 0; i < offset; i++){
                ListNode temp(0);
                temp->next = l2;
                l2 = temp;
            }
            m = n;
        }
        while(l1->next != NULL && l2->next != NULL){
            nums[index++] = l1->val + l2->val;
        }

        int carry = nums[index - 1] / 10;
        ListNode res_node(nums[index - 1] % 10);
        res_node->next = NULL;
        for(int i = index - 2; i >= 0; i--){
            int sum = nums[i] + carry;
            carry = sum / 10;
            ListNode temp(sum % 10);
            temp->next = NULL;
            res_node->next = temp;
            res_node = 
        }

    }
};

int main(){

	return 0;
}

