#include <stdio.h>

int exponential(int a, int b);

void main(){
int num = 371;
int temp = num;
int i;
for(i = 1; temp>=1; i++)
{
        temp = temp / 10;
}

i = i + 1;

int sum = 0;
temp = num;
int j;
for(j = i; j>0; j--)
{
        sum += exponential((temp%10),i);
        temp = temp / 10;
}

if(sum == num)
{
        printf("The number is armstrong.\n");
}
else
{
        printf("The number is not armstrong.\n");
}
}
int exponential(int a, int b)
{
        int m = 1;
        int i;
        for(i = b; b>0; i--)
{
        m *= a;
}
        return m;
}
