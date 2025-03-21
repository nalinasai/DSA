/*

//linear queue
#include <iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int front;
        int rear;
        int size;
        int capacity;

    public:
        Queue(int cap){
            capacity=cap;
            size=0;
            front=0;
            rear=-1;
            arr=new int[capacity];
        }

    void enqueue(int value){
        if(size==capacity){
            cout<<"queue is full. can't add."<<endl;
        }
        else{
            rear++;
            arr[rear]=value;
            size++;
        }
    }

    int dequeue(){
        if(size==0){
            cout<<"Queue is empty. can't dequeue."<<endl;
        }
        else{
            int key = arr[front];
            front++;
            size--;
            return key;
        }
    }

    bool isempty(){
        return size==0;
    }

    bool isfull(){
        return size==capacity;
    }

    void display(){


        if(isempty()){
            cout<<"queue is empty"<<endl;
        }

        for(int i=0; i<=rear; i++){
            cout<<arr[i]<<endl;
        }
    }

};

int main(){
    int sizeofarray;
    cin>>sizeofarray;
    Queue q(sizeofarray);

    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(70);
    q.enqueue(60);


    q.dequeue();
    q.dequeue();

    q.display();

}

*/



//circular queue

#include <iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int front;
        int rear;
        int size;
        int capacity;
    public:
        Queue(int cap){
            capacity=cap;
            arr=new int[capacity];
            rear=-1;
            size=0;
            front=0;
        }
    
    void enqueue(int value){
        if(size==capacity){
            cout<<"queue is full. can't add."<<endl;
        }
        rear=(rear+1)%capacity;
        arr[rear]=value;
        size++;
    }

    int dequeue(){
        if(size==0){
            cout<<"queue is empty. can't dequeue"<<endl;
        }
        int key=arr[front];
        front=(front+1)%capacity;
        size--;
        return key;
    }

    bool isempty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }

    bool isfull(){
        if(size==capacity){
            return true;
        }
        else{
            false;
        }
    }

    void  display(){
        if(size==0){
            cout<<"queue is empty. can't display."<<endl;
        }
        for(int i=front; i!=rear; (i=i+1)%capacity){
            cout<<arr[i]<<" ";
        }

        cout<<arr[rear]<<endl;
    }
};

int main(){
    int sizeofarray;
    cin>>sizeofarray;
    Queue q(sizeofarray);

    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(70);
    q.enqueue(60);


    q.dequeue();
    q.dequeue();

    q.display();
    return 0;
}