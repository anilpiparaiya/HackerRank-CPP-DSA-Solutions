
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    
    if(!head) return node;
    
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* prev_node;
    int pos = 0;
    
    while(temp != NULL){
        if(pos == position) break;
        prev_node = temp;
        temp = temp->next;
        pos++;
    }
    
    prev_node->next = node;
    node->next = temp;
    
    return head;
    

}