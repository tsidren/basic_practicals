#include<stdlib.h>
#include <stdio.h>

#define MAX 20

char stk[20];
int top = -1;

int covertInfixToPostfix(char*); 
int isEmpty();
int isFull();
char peek();
char pop();
void push(char );
int checkIfOperand(char );
int precedence(char );


int main()
{   char expression[] = "{[a(3*5)]-d}"; 
    
    covertInfixToPostfix(expression); 
    
    return 0; 
}

int isEmpty()
{   return top == -1;
}
int isFull()
{   return top == MAX - 1;
}

char peek()
{    return stk[top];
}

char pop()
{   if(isEmpty())
        return -1;

    char ch = stk[top];
    top--;
    return(ch);
}

void push(char oper)
{   if(isFull())
        printf("Stack Full!!!!");  
    else{
        top++;
        stk[top] = oper;
    }
}

int checkIfOperand(char ch) 
{   return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
} 

int precedence(char ch) 
{   switch (ch) 
        {   case '+': 
            case '-': 
                return 1; 

            case '*': 
            case '/': 
                return 2; 

            case '^': 
                return 3; 
        } 
    return -1; 
} 

int covertInfixToPostfix(char* expr) 
{   int i, j;

    for (i = 0, j = -1; expr[i]; ++i) 
    {   if (checkIfOperand(expr[i])) 
            expr[++j] = expr[i]; 

        else if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
            push(expr[i]); 

        else if (expr[i] == ')' || expr[i] == '}'  || expr[i] == ']') 
        {   if(expr[i]==')')
            {   while (!isEmpty() && peek() != '(') 
                    expr[++j] = pop(); 
                
                pop();
            }
            
            if(expr[i] == ']')
            {   while (!isEmpty() && peek() != '[') 
                    expr[++j] = pop(); 
                
                pop();
            }

           if(expr[i]=='}')
            {   while (!isEmpty() && peek() != '{') 
                    expr[++j] = pop(); 
                
                pop();
            }
        }
        else
        {   while (!isEmpty() && precedence(expr[i]) <= precedence(peek())) 
                expr[++j] = pop(); 
            push(expr[i]); 
        } 

    } 

    while (!isEmpty()) 
        expr[++j] = pop(); 

    expr[++j] = '\0'; 
    printf( "%s", expr); 
} 
