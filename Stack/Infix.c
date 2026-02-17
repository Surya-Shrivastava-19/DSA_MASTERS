#include <stdio.h>
#include <ctype.h>   // for isalnum()

#define MAX 100

char stack[MAX];
int top = -1;

// PUSH function
void push(char x)
{
    top++;
    stack[top] = x;
}

// POP function
char pop()
{
    return stack[top--];
}

// check operator precedence
int precedence(char op)
{
    if(op=='+' || op=='-')
        return 1;
    else if(op=='*' || op=='/')
        return 2;
    else if(op=='^')
        return 3;
    else
        return 0;
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i, j=0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    // scan infix expression
    for(i=0; infix[i]!='\0'; i++)
    {
        char ch = infix[i];

        // 1️⃣ If operand → directly add to postfix
        if(isalnum(ch))
        {
            postfix[j++] = ch;
        }

        // 2️⃣ If '(' → push into stack
        else if(ch=='(')
        {
            push(ch);
        }

        // 3️⃣ If ')' → pop until '('
        else if(ch==')')
        {
            while(stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }

        // 4️⃣ If operator
        else
        {
            while(top!=-1 && precedence(stack[top]) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // 5️⃣ pop remaining operators
    while(top!=-1)
    {
        postfix[j++] = pop();
    }

    postfix[j]='\0';

    printf("Postfix expression = %s", postfix);

    return 0;
}
