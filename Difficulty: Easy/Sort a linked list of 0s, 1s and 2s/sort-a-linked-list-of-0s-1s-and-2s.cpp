//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        
        
        Node *oneHead = new Node(-1), *twoHead = new Node(-1), *zerosHead = new Node(-1);
        
        Node* l0 = zerosHead;
        Node* l1 = oneHead;
        Node* l2 = twoHead;
        Node* temp = head;
        while(temp){
            if(temp->data == 0){
                l0->next = temp;
                l0 = l0->next;
            }
            else if(temp->data == 1){
                l1->next = temp;
                l1 = l1->next;
            }
            else{
                l2->next = temp;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        
        
        l0->next = (oneHead->next)? oneHead->next: twoHead->next;
        l1->next = twoHead->next;
        
        l2->next = NULL;
        Node* newHead = zerosHead->next;
        return newHead;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends