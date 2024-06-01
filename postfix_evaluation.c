#include<stdio.h>
#include<string.h>
#include<ctype.h>
void postfix_evaluation(char *postfix){
    int st[101];
    int top = -1;
    for(int i=0; i<strlen(postfix); i++){
        if(isdigit(postfix[i])){
            st[++top] = postfix[i]-'0';
        }
        else {
            int val;
            if(postfix[i] == '+'){
                val = (st[top-1]) + (st[top]);
                top--;
                top--;
            }
            else if(postfix[i] == '-'){
                val = (st[top-1]) - (st[top]);
                top--;
                top--;
            }
            else if(postfix[i] == '*'){
                val = (st[top-1]) * (st[top]);
                top--;
                top--;
            }
            else {
                val = (st[top-1]) / (st[top]);
                top--;
                top--;
            }
            st[++top] = val;
            
        }
    }
    printf("%d",st[top]);
}
int main (){
    char postfix[101];
    scanf("%s",postfix);
    postfix_evaluation(postfix);
    return 0;
}