class MyCircularQueue {
public:
    vector<int> q;
    int front, rear, size, cap;

    MyCircularQueue(int k) {
        q.resize(k);
        cap = k;
        size = 0;
        front = 0;
        rear = -1;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % cap;
        q[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        front = (front + 1) % cap;
        size--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return q[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }
};
