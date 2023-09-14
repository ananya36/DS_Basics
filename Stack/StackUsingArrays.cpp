#include <iostream>
using namespace std;
class Stack
{
public:
    int top;  // keeps track of arr index
    int *arr; // arr pointer
    int size; // arr size
    Stack(int size)
    { // constuctor to intialize size, arr and top
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1) // atleast one space available
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    bool isEmpty()
    {
        if (top < 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int peak(){
         if (top >= 0){
            return arr[top];
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.pop();
    cout << st.peak() << endl;
}