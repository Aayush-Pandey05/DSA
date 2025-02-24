#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int precedence(char op){
    if(op=='-' || op=='+') return 1;
    if(op=='/' || op=='*') return 2;
    if(op=='^') return 3;
    return 0;
}

string infixTopostfix(string expression){
    stack<char> s;
    string postfix;

    for(char ch: expression){

        if(isalnum(ch)){
            postfix+=ch;
        }

        else if(ch=='('){
            s.push(ch);
        }

        else if(ch==')'){
            while(!s.empty() && s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }

        else{ // if its an operator
            while(!s.empty() && precedence(ch) < precedence(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main(){
    string infix = "a+b*(c-d)";  // Example infix expression
    cout << "Postfix: " << infixTopostfix(infix) << endl;
    return 0;
}