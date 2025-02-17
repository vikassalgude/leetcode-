class MyCircularQueue {
public:
    int front,rear,size;
    int *arr;
    MyCircularQueue(int k) {
        size=k;
        arr=new int [k];
        rear=front=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return 0;
        }
        else if(isEmpty()){
            front=rear=0;
            arr[0]=value;
            return true;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=value;return true;
        }
    }
    
    bool deQueue() {
        if(isEmpty()){
            return 0;
        }else{
            if(front ==rear){
                front=rear=-1;
            }else{
                front=(front+1)%size;
            }
            return 1;
        }
    }
    
    int Front() {
        if(isEmpty())return -1;
        else return arr[front];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        else return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(front==(rear+1)%size){
            return 1;
        }else{
            return 0;
        }
    }
};
