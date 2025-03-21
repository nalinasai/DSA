//using stack library   s.push() , s.pop() ,  s.empty(),  s.top() , s.size() , s.swap(s2)

/*
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(20);
    s.push(30);
    s.push(19);
    s.push(10);

    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;
    s.pop();

    if(s.empty()){
        cout<<"stack is empty\n";
    }
    else{
        cout<<s.top()<<endl;
    }

    cout<<s.size();

    cout<<"Next function\n";
    stack<int> s1,s2;
    s1.push(20);
    s1.push(30);
    s2.push(40);

    s2.swap(s1);

    cout<<s1.top()<<endl;;
    cout<<s2.top();


}


*/



//without using stack library


#include <iostream>
using namespace std;


#define max 5


class Stack{
    private:
        int arr[max];
        int top;
    
    public:
        Stack(){
            top = -1;
        }


    bool isfull(){
        if(top==max-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isempty(){
        
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void pushele(int value){
        
        if(isfull()){
            cout<<"satck is full\n";
        }
        else{
            arr[++top]=value;
        }
    }

    int popele(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        else{
            return arr[top--];
        }
    }

};



int main(){
    Stack s;
    
    

    for(int i=0; i<max; i++){
        int num;
        cin>>num;
        s.pushele(num);

    }


    cout<<s.popele();

    return 0;

}




