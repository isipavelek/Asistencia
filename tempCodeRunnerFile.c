#include <stdio.h>

int main(){
    int val1,val2;
    char op;
    printf("Ingrese el primer valor\n");
    scanf("%d",&val1);
    printf("Ingrese el segundo valor\n");
    scanf("%d",&val2);
    printf("Ingrese la operacion a realizar (+,-,*,/) \n");
    fflush(stdin);
    scanf("%c",&op);
    switch(op){
        case '+': printf("Res: %d",val1+val2);
                    break;
        case '-':printf("Res: %d",val1-val2);
                    break;
        case '*':printf("Res: %d",val1*val2);
                    break;
        case '/':printf("Res: %d",val1/val2);
                    break;
    }
    
    return 0;
}