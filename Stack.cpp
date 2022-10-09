#include <iostream>
using namespace std;

class Stack{
    private:
        int *arr, top, size;
    public:
        Stack(){
            cout<<"\nEnter Maximum Size of Stack : ";
            cin>>size;
            arr=new int[size];
            top=-1;
            int n;
            cout<<"\nEnter Number of Elements you want to enter : ";
            do
                cin>>n;
            while(n>size);
            cout<<"\nEnter Terms : ";
            while(n--){
                int a;
                cin>>a;
                top++;
                arr[top]=a;
            }
        }

        void display(){
            cout<<"\nStack : ";
            for(int i=top; i>-1; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void push(int a){
            if(top==size-1){
                cout<<"\nStack Overflow";
                return;
            }
            top++;
            arr[top]=a;
        }

        int pop(){
            if(top==-1){
                cout<<"\nStack Underflow\n";
                return -1;
            }
            int a;
            a=arr[top];
            arr[top--]=0;
            return a;
        }

        int peek(int pos){
            if(pos<=top)
                return arr[top-pos];
            return -1;
        }

        int stackTop(){
            if(top==-1)
                return -1;
            return arr[top];
        }

        bool isEmpty(){
            if(top==-1)
                return true;
            return false;
        }

        bool isFull(){
            if(top==size-1)
                return true;
            return false;
        }

        ~Stack(){
            delete []arr;
            arr=NULL;
        }
};

int main(){
    cout<<"\nCreating a Stack"<<endl;
    Stack s;
    cout<<"\nMenu : ";
    cout<<"\n\t1.Display\n\t2.Push\n\t3.Pop\n\t4.Peek\n\t5.Get Top Element";
    cout<<"\n\t6.Check if Stack is Empty\n\t7.Check if Stack is Full\n\t0.Exit";
    int opt;
    do{
        cout<<"\nChoose Option : ";
        cin>>opt;
        switch(opt){
            case 0:
                break;
            case 1:
                s.display();
                break;
            case 2:
                int x;
                cout<<"\nEnter Element : ";
                cin>>x;
                s.push(x);
                break;
            case 3:
                cout<<"\nRemoved Element : "<<s.pop();
                break;
            case 4:
                int pos;
                cout<<"\nEnter Position to peek at : ";
                cin>>pos;
                cout<<"\nElement at Position "<<pos<<" : "<<s.peek(pos);
                break;
            case 5:
                cout<<"\nStack Top : "<<s.stackTop();
                break;
            case 6:
                cout<<"Stack is Empty? "<<s.isEmpty();
                break;
            case 7:
                cout<<"Stack is Full? "<<s.isFull();
                break;
            default:
                cout<<"\nInvalid Input";
        }
    }while(opt!=0);
    return 0;
}