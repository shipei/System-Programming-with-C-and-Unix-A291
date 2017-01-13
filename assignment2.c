#include <stdio.h>

int power(int, int);
int decimalToOctal(int);
int octalToBinary(int);
int addition(int, int);
int multiplication(int, int);

void main()
{
        int num1,num2;
        int operator;
        printf("Enter two integers: \n");
        scanf("%d %d", &num1, &num2);
        printf("Select an operator: \n 1.multiplication\n 2.addition\n");
        scanf("%d", &operator);


        int octal1;
        int octal2;
        octal1 = decimalToOctal(num1);
        octal2 = decimalToOctal(num2);
        printf("The first octal number is %d\n", octal1);
        printf("The second octal number is %d\n", octal2);

        int total;
        if(operator == 2)
        {
                total = addition(octal1, octal2);
                printf("addition of two octal numbers is %d ", total);
        }
        else if(operator == 1)
        {
                total = multiplication(octal1, octal2);
                printf("multiplicatiom of two octal numbers is %d ", total);
        }
        else
        {
                printf("The operator entered is not valid.\n");
        }

        int result;
        result = octalToBinary(total);
        printf("The result is %d", result);
}

int addition(int a, int b)
{
        int decimal1 = 0;
        int i = 0;
        while(a != 0)
        {
                decimal1 = decimal1 + (a % 10) * power(8, i++);
                a = a /10;
        }

        int decimal2 = 0;
        int j = 0;
        while(b != 0)
        {
                decimal2 = decimal2 + (b % 10) * power(8, j++);
                b = b /10;
        }

        int sum;
        sum = decimal1 + decimal2;
        int result;
        result = decimalToOctal(sum);
        return result;
}

int multiplication(int a, int b)
{
        int decimal1 = 0;
        int i = 0;
        while(a != 0)
        {
                decimal1 = decimal1 + (a % 10) * power(8, i++);
                a = a /10;
        }

        int decimal2 = 0;
        int j = 0;
        while(b != 0)
        {
                decimal2 = decimal2 + (b % 10) * power(8, j++);
                b = b /10;
        }

        int product;
        product = decimal1 * decimal2;
        int result;
        result = decimalToOctal(product);
        return result;

}

int decimalToOctal(int n)
{
        int count = 0;

        while(power(8, count) <= n)    //count the digits of the octal number 
        {
                count++;
        }

        int i;
        int pow[count];
        for(i = 0; i < count; i++)  //list the powers of 8
        {
                pow[i] = power(8, i);

        }

        int digit;
        int j;
        int index = 0;
        int octal = 0;
        for(j = count; j >= 1; j--)     //calculate the octal number
        {
                digit = n / pow[j - 1];
                octal += digit * power(10, j - 1);
                n = n % pow[j - 1];
        }

        return octal;
}

int octalToBinary(int n)
{
        int decimal = 0;
        int binary = 0;
        int i = 0;
        while(n != 0)
        {
                decimal += (n % 10) * power(8, i);
                ++i;
                n /= 10;
        }

        i = 1;
        while(decimal != 0)
        {
                binary += (decimal % 2) * i;
                decimal /= 2;
                i *= 10;
        }
        return binary;
}

int power(int a, int b)
{
        int result = 1;
        int m = 1;
        for(m = 1; m <= b; m++)
{
        result = result * a;
}
        return result;
}

                    
                                                                                         
                                                                                         120,0-1       Bot
