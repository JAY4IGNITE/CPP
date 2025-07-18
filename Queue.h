#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
const int n=100;
void enqueue(int q[],int &front,int &rear,int val){
    if(rear == n-1){
        cout << "Stack Overflown";
    }
    else{
        if(front == 0){
            front = 1;
        }
        q[++rear]=val;
    }
}
void dequeue(int q[],int &front,int &rear){
    if(front == rear){
        cout << "Queue is empty";
    }
    front++;
}
void display(int q[],int &front,int &rear){
    if(rear == -1){
        cout << "No elements to display";
    }
    else{
        for(int i=front;i<=rear;i++){
            cout << q[i] << " ";
        }
    }
}
#endif
