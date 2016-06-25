/*
hackerrank.com challenge https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node* current; Node* prior;
    if (head==NULL) return head;
    if (position == 0) return head->next;
    current = head;
    for (int i=0; i<position; i++) {
        prior = current;
        current = current->next;
        }
    prior->next = current->next;
    return head;
}