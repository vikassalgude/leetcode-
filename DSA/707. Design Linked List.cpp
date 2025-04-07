class node{
    public:
    int val;
    node *next;
    node(int x){
        val=x;
    }
};
class MyLinkedList {
    node *head;
    int size;
public:
    MyLinkedList() {
        head=new node(0);
        size=0;
    }
    
    int get(int index) {
        if(index<0||index>=size)return -1;
        node *curr=head;
        for(int i=0;i<=index;i++){
            curr=curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
         addAtIndex(0,  val); 
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val) ;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0)return ;
        if(index>size)return;
        node *curr=head;
        size++;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        node *t=new node(val);
        t->next=curr->next;
        curr->next=t;

    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=size)return;
        node *curr=head;
        size--;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;

    }
};

