#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int>& q) {
    std::stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    std::queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);

    std::cout << "Original Queue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // Reverse the queue
    reverseQueue(myQueue);

    std::cout << "Reversed Queue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}
