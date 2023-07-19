#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string expression; int flag = 0; stack<char> mystack;

    getline(cin, expression);

    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            mystack.push(expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (mystack.empty())
            {
                flag = 1;
                break;
            }
            else if (int(mystack.top()) + int(expression[i]) == 81 || int(mystack.top()) + int(expression[i]) == 184 || int(mystack.top()) + int(expression[i]) == 248)
            {
                mystack.pop();
            }
        }
    }
    if (!mystack.empty() || flag == 1 && !mystack.empty() || flag == 1 && mystack.empty())
        cout << "Unbalanced Brackets" << endl;

    else
        cout << "Balanced Brackets" << endl;

    return 0;
}