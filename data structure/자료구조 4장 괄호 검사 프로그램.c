#include <stdio.h>
#define MAX_STACK_SIZE 100
typedef char element;
typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
} STACK;

int main(int argc, char const *argv[])
{
    char *p = "{ A[(i+1)]=0; }";
    if (check_matching(p) == 1)
        printf("%s 괄호검사성공\n", p);
    else
        printf("%s 괄호검사실패\n", p);
    return 0;
}

void init_stack(STACK *s){
    s->top=-1;
}

int is_empty(STACK *s){
    return (s->top==-1);
}

int is_full(STACK *s){
    return (s->top==(MAX_STACK_SIZE-1));
}

void push(STACK *s,element item){
    if(is_full(s)){
        fprintf(stderr,"스택 포화 에러\n");
        return;
    }
    else s->data[++(s->top)]=item;
}

char pop(STACK *s){
    if(is_empty(s)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}

int check_matching(const char *in)
{
    STACK s;
    char ch, open_ch;
    int i, n = strlen(in); // i그냥 숫자 세는 거임, n= 문자열의 길이
    init_stack(&s);        // 스택의 초기화

    for (i = 0; i < n; i++)
    {
        ch = in[i]; // ch = 다음 문자
        switch (ch)
        {
        case '(':
        case '[':
        case '{':
            push(&s, ch);
            break;
        case ')':
        case ']':
        case '}':
            if (is_empty(&s))
                return 0;
            else
            {
                open_ch = pop(&s);
                if ((open_ch == '(' && ch != ')') ||
                    (open_ch == '[' && ch != ']') ||
                    (open_ch == '{' && ch != '}'))
                {
                    return 0;
                }
                break;
            }
        }
    }
    if (!is_empty(&s))
        return 0; // 스택에 남아있으면 오류
    return 1;
}