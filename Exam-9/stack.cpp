// stack_escalator.cpp
// Array-based Stack implementation (Escalator project)
// Language: C++ (C++17)

#include <iostream>
#include <limits>

class Stack {
    int *arr;
    int capacity;
    int topIndex; // index of current top element (-1 when empty)

public:
    // Constructor
    Stack(int size = 10) : capacity(size), topIndex(-1) {
        arr = new int[capacity];
    }

    // Destructor
    ~Stack() { delete[] arr; }

    // push: Adds an element to the top of the stack.
    bool push(int value) {
        if (isFull()) return false;
        arr[++topIndex] = value;
        return true;
    }

    // pop: Removes the top element from the stack and returns it.
    // If empty, returns a special value and sets ok=false.
    int pop(bool &ok) {
        if (isEmpty()) { ok = false; return std::numeric_limits<int>::min(); }
        ok = true;
        return arr[topIndex--];
    }

    // top/peek: Returns the top element without removing it.
    int top(bool &ok) const {
        if (isEmpty()) { ok = false; return std::numeric_limits<int>::min(); }
        ok = true;
        return arr[topIndex];
    }

    // isEmpty: checks if stack is empty
    bool isEmpty() const { return topIndex == -1; }

    // isFull: checks if stack is full
    bool isFull() const { return topIndex == capacity - 1; }

    // size: current number of elements
    int size() const { return topIndex + 1; }

    // display: print stack contents from top to bottom
    void display() const {
        if (isEmpty()) {
            std::cout << "[Stack is empty]\n";
            return;
        }
        std::cout << "Stack (top -> bottom): ";
        for (int i = topIndex; i >= 0; --i) {
            std::cout << arr[i] << (i == 0 ? "" : " | ");
        }
        std::cout << '\n';
    }
};

int main() {
    std::cout << "=== Escalator (Stack) - Array Implementation ===\n";

    int capacity;
    std::cout << "Enter stack capacity (default 10): ";
    if (!(std::cin >> capacity) || capacity <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        capacity = 10;
        std::cout << "Using default capacity = 10\n";
    }

    Stack s(capacity);

    while (true) {
        std::cout << "\nMenu:\n"
                  << "1. Push (add element)\n"
                  << "2. Pop (remove top element)\n"
                  << "3. Top (display top element without removing)\n"
                  << "4. Display stack\n"
                  << "5. Check if stack is empty\n"
                  << "6. Check if stack is full\n"
                  << "7. Exit\n"
                  << "Select option: ";

        int choice;
        if (!(std::cin >> choice)) {
            // handle invalid non-integer input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 7.\n";
            continue;
        }

        if (choice == 1) {
            if (s.isFull()) {
                std::cout << "Cannot push: Stack is full.\n";
            } else {
                int val;
                std::cout << "Enter value to push: ";
                if (!(std::cin >> val)) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid value.\n";
                    continue;
                }
                s.push(val);
                std::cout << "Pushed " << val << " onto stack.\n";
            }
        } else if (choice == 2) {
            bool ok;
            int popped = s.pop(ok);
            if (!ok) std::cout << "Cannot pop: Stack is empty.\n";
            else std::cout << "Popped element: " << popped << '\n';
        } else if (choice == 3) {
            bool ok;
            int t = s.top(ok);
            if (!ok) std::cout << "Stack is empty. No top element.\n";
            else std::cout << "Top element: " << t << '\n';
        } else if (choice == 4) {
            s.display();
        } else if (choice == 5) {
            std::cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is NOT empty.\n");
        } else if (choice == 6) {
            std::cout << (s.isFull() ? "Stack is full.\n" : "Stack is NOT full.\n");
        } else if (choice == 7) {
            std::cout << "Exiting. Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid choice. Choose 1..7.\n";
        }
    }

    return 0;
}
