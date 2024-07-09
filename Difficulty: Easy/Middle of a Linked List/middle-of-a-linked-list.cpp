//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head) {
        // Your code here
        Node* temp = head;
        int length = 0;
        
        // Calculate the length of the linked list
        while (temp != nullptr) {
            temp = temp->next;
            length += 1;
        }
        
        // If the length is odd
        if (length % 2 == 1) {
            int oddMid = length / 2;
            Node* oddTemp = head;
            for (int i = 0; i < oddMid; i++) {
                oddTemp = oddTemp->next;
            }
            return oddTemp->data;
        }
        
        // If the length is even
        else {
            int evenMid = length / 2;
            Node* evenTemp = head;
            for (int i = 0; i < evenMid; i++) {
                evenTemp = evenTemp->next;
            }
            return evenTemp->data;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    // code
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 0; i < N - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends