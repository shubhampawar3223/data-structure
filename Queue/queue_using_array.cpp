#include<bits/stdc++.h>

using namespace std;

class Queue {
    public:
     int rear,front,size,capacity;
     int* array;
};

//que creation function.
//here we initialized variables.
Queue* createqueue(int capa){
    Queue* queue = new Queue();
    queue->capacity = capa;
    queue->front= queue->size= 0;
    queue->rear= capa-1;
    queue->array = new int[(queue->capacity* sizeof(int))];
    return queue;
}

int isfull(Queue* queue){
    return (queue->size == queue->capacity);
}

int isnull(Queue* queue){
    return(queue->size == 0);
}

//we enque elemet at rear.
void enqueue(Queue* queue,int item){
    if(isfull(queue)){
        cout<<"Queue is in overflow"<<endl;
        return;
    }
    queue->rear= (queue->rear + 1)% queue->capacity;
    queue->array[queue->rear] = item;
    queue->size= queue->size + 1;
    cout<<item<<"is enqued in que."<<endl;
}

//we deque elemet from front.
int  dequeue(Queue* queue){
    if(isnull(queue)){
        cout<<"Queue is in null state"<<endl;
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front= (queue->front +1 ) % queue->capacity;
    queue->size= queue->size - 1;
    return item;
    
}

int front(Queue* queue) {
    return (queue->front);
}

int rear(Queue* queue) {
    return (queue->rear);
}

int main(){
    Queue* queue= createqueue(10);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);
    enqueue(queue, 6);
    
    cout<<dequeue(queue)<<"is dequeued"<<endl;
    cout<<"Front element is"<<front(queue)<<endl;
    cout<<"rear element is"<<rear(queue)<<endl;
    return 0;
}