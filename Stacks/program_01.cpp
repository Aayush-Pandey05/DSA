#include <iostream>
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack()
    {
        size = 1000;
        arr = new int[size];
        top = -1;
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int Top()
    {
        return arr[top];
    }

    int Size()
    {
        return top+1;
    }
};

int main()
{
    Stack s;
    s.push(3);
    s.push(5);
    s.push(4);
    s.push(8);
    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.Size() << endl;
    cout << "The element deleted is " << s.pop() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    return 0;
}