#include <stdio.h>
void main()
{
    int i = 1;
    for(i = 1; i <= 10; i++){
        printf("%d\t", i);
        if(i == 5) break;
    }
}