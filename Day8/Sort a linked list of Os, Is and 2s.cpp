Node *sortList(Node *head) {
    if (!head || !(head->next))
        return head;
    Node *zeroD = new Node(0);
    Node *oneD = new Node(0);
    Node *twoD = new Node(0);
    Node *zero = zeroD, *one = oneD, *two = twoD;
    Node *curr = head;
    while (curr != NULL) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        }
        else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        }
        else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }
    if (oneD->next) 
        zero->next = oneD->next;
    else
        zero->next = twoD->next;
    one->next = twoD->next;
    two->next = nullptr;
    head = zeroD->next;
    return head;
}
