#include <iostream>
using namespace std;

struct Stack {
    int topIndex;
    int capacity;
    int* arr;

    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }
};

void push(Stack& st, int val) {
    if (st.topIndex == st.capacity - 1) {
        return;
    }
    st.topIndex++;
    st.arr[st.topIndex] = val;
}

void pop(Stack& st) {
    if (st.topIndex == -1) {
        return;
    }
    st.topIndex--;
}

int top(Stack& st) {
    if (st.topIndex == -1) {
        return -1;
    }
    return st.arr[st.topIndex];
}

bool empty(Stack& st) {
    return st.topIndex == -1;
}

int main() {
    Stack st(5);
    
    push(st, 10);
    push(st, 20);
    push(st, 30);
    
    cout << top(st) << endl;
    pop(st);
    cout << top(st) << endl;
    
    return 0;
}
