#include <iostream>
using namespace std;

#define MAX 10

class DEqueue{
private:
    int front;
    int rear;
    int size;
    int arr[MAX];

public:
    DEqueue(){
    front=-1;
    rear=-1;
    size=0;
    }

    bool isFull(){
    return (size==MAX);
    }

    bool isEmpty(){
    return (size==0);
    }

    void insertFront(int key){
    if(isFull()){
        cout<<"\nOverflow, cannot insert!!\n";
        return;
    }

    if(front==-1){
            //logic for position of insertion
    front=0;
    rear=0;
    }
    else if(front==0){
        front=MAX-1;
    }
    else{
        front--;
    }

    arr[front]=key;
    size++;
    }

    void insertRear(int key){
    if(isFull()){
        cout<<"\nOverflow, cannot insert!!\n";
        return;
    }

    if(front==-1){//queue empty or not
    front=0;
    rear=0;
    }
    else if(rear==MAX-1){
    rear=0;
    }
    else{
        rear++;
    }

    arr[rear]=key;
    size++;
    }

    void deleteFront(){
        //logic for position of deletion
    if(isEmpty()){
        cout<<"\nUnderflow, cannot delete!!\n";
        return;
    }

    if(front==rear){//only one element inserted
    front=-1;
    rear=-1;
    }
    else if(front==MAX-1){
        front=0;
    }
    else{
        front++;
            //current front index shifted
    }

    size--;
    }

    void deleteRear(){
    if(isEmpty()){
        cout<<"\nUnderflow, cannot delete!!\n";
        return;
    }

    if(front==rear){//only one element inserted
    front=-1;
    rear=-1;
    }
    else if(rear==0){
        rear=MAX-1;
    }
    else{
        rear--;
            //current front index shifted
    }

    size--;
    }

    void display(){
    if(isEmpty()){
        cout<<"\nQueue is empty\n";
    }

    int i=front;
    cout<<"\nQueue elements: ";
    while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;
        }
        cout << arr[rear] << endl;
    }


};



int main()
{
DEqueue Q;
cout<<"Queue limit 10 Elements\n";
int x=-1;
while(x!=0){
        int y;
cout<<
"\nInput Query:\n1: Insert Front | 2: Insert Rear\n3: Delete Front | 4: Delete Rear\n5: Display Current Queue | 0: Abort Operation\n\n";

cin >>x;
if(x==1){
        cout<<"\nValue to Insert Front: ";
        cin>>y;
        Q.insertFront(y);
}
else if(x==2){
cout<<"\nValue to Insert Rear: ";
        cin>>y;
        Q.insertRear(y);
}
else if(x==3){
cout<<"\nValue Deleted at Front: ";

        Q.deleteFront();
}
else if(x==4){
cout<<"\nValue Deleted at Rear: ";

        Q.deleteRear();
}
else if(x==5){
    Q.display();
}

}

cout<<"\n\n[ OPERATIONS COMPLETE ]\n\n";

    return 0;
}
