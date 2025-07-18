#include"queue.h"
using namespace std;
int main(){
    int q[n];
    int front = -1,rear = -1;
    enqueue(q,front,rear,10);
    enqueue(q,front,rear,20);
    enqueue(q,front,rear,30);
    enqueue(q,front,rear,40);
    dequeue(q,front,rear);
    enqueue(q,front,rear,50);
    enqueue(q,front,rear,60);
    display(q,front,rear);
}
