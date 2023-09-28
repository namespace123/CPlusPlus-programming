#include<iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};


// my first source： 
//class Solution {
//public:
//    
//    // 展示链表所有元素 
//    void display(ListNode* l1){
//        while(l1 != NULL){
//            cout<<l1->val<<" ";
//            l1 = l1->next;
//        }
//        cout<<endl;
//    }
//    
//    // 在尾结点p后面插入 
//    void insertByEnd(ListNode* &p, int val){
////        ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
////        *temp = ListNode(val);
//        ListNode *temp = new ListNode(val);
//        p->next = temp;
//        p = temp;
//    } 
//    
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int val = l1->val + l2->val;
////        ListNode *l3 = (ListNode *)malloc(sizeof(ListNode));
////        *l3 = ListNode(val % 10);
//          ListNode *l3 = new ListNode(val % 10);
//        ListNode *p = l3;
//        val /= 10;
//        l1 = l1->next;
//        l2 = l2->next;
//        while(l1 != NULL && l2 != NULL){
//            val = l1->val + l2->val + val;
//            insertByEnd(p, val % 10);
//            l1 = l1->next;
//            l2 = l2->next;
//            val /= 10;
//        }
//        while(l1 != NULL){
//            val = l1->val + val;
//            insertByEnd(p, val % 10);
//            l1 = l1->next;
//            val /= 10;
//        }
//        while(l2 != NULL){
//            val = l2->val + val;
//            insertByEnd(p, val % 10);
//            l2 = l2->next;
//            val /= 10;
//        }
//        if(val != 0){
//            insertByEnd(p, val);
//        }
//        return l3;
//    }
//};

// greater: 代码优化，与性能无关 
class Solution {
public:
    
    // 展示链表所有元素 
    void display(ListNode* l1){
        while(l1 != NULL){
            cout<<l1->val<<" ";
            l1 = l1->next;
        }
        cout<<endl;
    }
    // 在尾结点p后面插入 
    void insertByEnd(ListNode* &p, int val){
        ListNode *temp = new ListNode(val);
        p->next = temp;
        p = temp;
    } 
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val = l1->val + l2->val;
        ListNode *l3 = new ListNode(val % 10);
        val /= 10;
        ListNode *p = l3;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 != NULL || l2 != NULL){
            int a = (l1 != NULL) ? l1->val : 0;
            int b = (l2 != NULL) ? l2->val : 0;
            val = a + b + val;
            p->next = new ListNode(val % 10);
            p = p->next;
            if(l1 != NULL){
                l1 = l1->next;
            }
            if(l2 != NULL){
                l2 = l2->next;
            }
            val /= 10;
        }
        if(val != 0){
            p->next = new ListNode(val);
        }
        return l3;
    }
};

int main(){
    
    Solution sol;
    
    // 构建好链表 a, b 
//    int a[] = {2, 4, 3};
//    int b[] = {5, 6, 4};
//    int a[] = {9, 7, 6, 9};
//    int b[] = {5, 6, 8};
    int a[] = {0};
    int b[] = {7, 3};
//    ListNode *l1 = (ListNode *)malloc(sizeof(ListNode));
//    *l1 = ListNode(a[0]);
      ListNode *l1 = new ListNode(a[0]);
    ListNode *p1 = l1;
    int len1 = sizeof(a) / sizeof(int);
    for(int i = 1; i < len1; i++){
        sol.insertByEnd(p1, a[i]);
    }
    sol.display(l1);
    
//    ListNode *l2 = (ListNode *)malloc(sizeof(ListNode));
//    *l2 = ListNode(b[0]);
       ListNode *l2 = new ListNode(b[0]);
    ListNode *p2 = l2;
    int len2 = sizeof(b) / sizeof(int);
    for(int i = 1; i < len2; i++){
        sol.insertByEnd(p2, b[i]);
    }
    sol.display(l2);

    // 相加求和    
    ListNode *l3 = sol.addTwoNumbers(l1, l2);
    sol.display(l3);
} 






















