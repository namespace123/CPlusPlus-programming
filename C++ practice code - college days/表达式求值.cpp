#include <iostream>
#include <cstring>
using namespace std; 
int s[501], *sp;
void init()
{
    sp = &s[0];
}
void push(int v)
{
    *sp++ = v;
}
int pop()
{
    return *--sp;
}
int main()
{
    char calc[100005], *p;
    int num;
    char op[2];
    int a, b;
    cin>>calc;
    init();
    push(0);
    strcpy(op, "+");
    num = 0;
    p = calc;
    while (1)
    {
        if ('0'<=*p && *p<='9')
        {
            num = num*10 + *p - '0';
        }
        else
        {
            push(num);
            num = 0;
 if (op[1] == '*')
            {
                a = pop()%10000;
                b = pop()%10000;
                push(b*a%10000);
                op[1] = 0;
            }
            if (*p == '*')
            {
                op[1] = '*';
            }
            else
            {
                a = pop()%10000;
                b = pop()%10000;
                if (op[0] == '+')
                    push((b+a)%10000);
                if (*p == 0)
                    break;
                else
                    op[0] = *p;
            }
        }
        ++p;
    }
    cout<<pop()%10000<<endl;
    return 0;
}

