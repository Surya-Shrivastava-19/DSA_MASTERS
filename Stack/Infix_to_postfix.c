#include <stdio.h>
#define max 100
char stack[max];
int top = -1;
void push(char x) {
    top++;
    stack[top] = x;
}
char pop() {
    return stack[top--];
}
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }else if (op == '*' || op == '/') {
        return 2;
    }else if (op == '^' || op == '$') {
        return 3;
    }else {
        return 0;
    }
}

int main() {
    char infix[max] , postfix[max];
    int j = 0;
    printf("ENTER INFIX EXPRESSION : ");
    scanf("%s", infix);
    for(int i=0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            postfix[j] = ch;
            j++;
        }else if (ch == '(') {
            push(ch);
        }else if (ch == ')') {
            while(stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }
            pop();
        }else {
            while(top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j] = pop();
                j++;
            }
            push(ch);
        }
    }
    while (top != -1) {
            postfix[j] = pop();
            j++;
        }
    postfix[j] = '\0';
    printf("POSTORDER EXPRESSION : %s", postfix);
    return 0;
}
