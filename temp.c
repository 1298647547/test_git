#include <stdio.h>
void fun(int num)
{
    if(num == 1)
    {
        return; 
    }
    --num;
    fun(num);
    printf("%d ",num);
}

int main(void)
{
    fun(5);
    printf("\n");
    return 0;
}
