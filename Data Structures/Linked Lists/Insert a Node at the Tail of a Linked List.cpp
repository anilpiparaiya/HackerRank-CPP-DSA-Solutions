SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    
    if(head == NULL) return node;
    SinglyLinkedListNode* temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = node;
    
    return head;
    


}