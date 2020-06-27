#include <stdio.h>

int main(){
    char pc[20], *str = "Um string";
    *pc = *str;
    //pc++;
    str++;
    *pc = *str;
    printf("%s", str);
}