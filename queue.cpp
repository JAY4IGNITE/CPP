#include"queue.h"
using namespace std;
int main(){
    int q[n];
    int front = -1,rear = -1;
    enqueue(q,front,rear,10);
    enqueue(q,front,rear,20);
    dequeue(q,front,rear);
    enqueue(q,front,rear,30);
    display(q,front,rear);
}
