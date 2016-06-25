Node* InsertNth(Node *head, int data, int position)
{
    int count=0; 
    Node* previous; Node* current;
    Node* n = new Node();
    n->data = data;
    if (position == 0) {
        n->next = head; 
        head = n;
        return head;
    }
    else {
        current = head;
        for (int i=1; i<=position; i++) {
            previous = current;
            current = current->next;
        }
        previous->next = n;
        n->next = current;
        return head;
    }
}