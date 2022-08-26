#include <iostream>
using namespace std;

class Stack
{
private:
    int sArr[100001];
    int top = -1;

public:
    void Push()
    {
        int data;
        cin >> data;

        sArr[++top] = data;
    }

    void Pop()
    {
        if(top == -1)
        {
            cout << -1 << endl;
            return;
        }

        cout << sArr[top] << endl;
        top--;
    }

    void Empty()
    {
        if(top == -1) cout << 1 << endl;
        else cout << 0 << endl;
    }

    void Size()
    {
        cout << top + 1 << endl;
    }

    void Top()
    {
        if(top == -1) cout << -1 << endl;
        else cout << sArr[top] << endl;
    }
};

int main(void)
{
    Stack s;
    int n;
    cin >> n;

    string order;

    for(int i = 0; i < n; i++)
    {
        cin >> order;

        if (order == "push") s.Push();
        if (order == "pop") s.Pop();
        if (order == "empty") s.Empty();
        if (order == "size") s.Size();
        if (order == "top") s.Top();
    }
}