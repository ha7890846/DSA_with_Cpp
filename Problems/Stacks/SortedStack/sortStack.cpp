#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << ", ";
        s.pop();
    }
    cout << endl;
}

void insertSorted(stack<int>& s, int value) {
    // Base case: stack is empty or top element is less than value
    if (s.empty() || s.top() < value) {
        s.push(value);
        return;
    }

    // Remove the top element
    int temp = s.top();
    s.pop();

    // Recur for the remaining elements in the stack
    insertSorted(s, value);

    // Push the top element back
    s.push(temp);
}

void sortStack(stack<int>& s) {
    // Base case: stack is empty
    if (s.empty()) {
        return;
    }
    // Remove the top element
    int value = s.top();
    s.pop();

    // Recur for the remaining elements in the stack
    sortStack(s);

    // Insert the top element back in sorted order
    insertSorted(s, value);
}

int main() {
    stack<int> s;
    s.push(30);
    s.push(10);
    s.push(50);
    s.push(20);
    s.push(40);

    cout << "Original stack: ";
    printStack(s);

    sortStack(s);

    cout << "Sorted stack: ";
    printStack(s);

    return 0;
}
