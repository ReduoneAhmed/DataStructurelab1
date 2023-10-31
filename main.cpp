#include <iostream>
using namespace std;

void removeLowest(stack<int>& s)
{
    if (s.empty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    int lowest = s.top();
    s.pop();

    while (!s.empty())
    {
        int current = s.top();
        s.pop();

        if (current < lowest)
        {
            lowest = current;
        }
    }

    stack<int> tempStack;
    while (!s.empty())
    {
        int current = s.top();
        s.pop();

        if (current != lowest)
        {
            tempStack.push(current);
        }
    }

    while (!tempStack.empty())
    {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(2);
    s.push(4);
    s.push(7);

    cout << "Stack elements are: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    s.push(5);
    s.push(4);
    s.push(7);
    s.push(2);
    s.push(-1);

    cout << "Stack elements are: ";
    stack<int> originalStack;
    while (!s.empty())
    {
        originalStack.push(s.top());
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    removeLowest(originalStack);

    cout << "Stack elements are: ";
    while (!originalStack.empty())
    {
        cout << originalStack.top() << " ";
        originalStack.pop();
    }
    cout << endl;

    return 0;
}
