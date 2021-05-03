// binary to decimal

#include <stdio.h>
#include <math.h>
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main()
{
    long binarynum;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);

    printf("Equivalent decimal number is: %d", binaryToDecimal(binarynum));
    return 0;
}

// decimal to binary

#include <stdio.h>
#include <math.h>

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    int decimalnum;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
    return 0;
}

// decimal to octal

#include <stdio.h>
#include <math.h>
/* This function converts the decimal number "decimalnum"
 * to the equivalent octal number
 */
int decimalToOctal(int decimalnum)
{
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * temp;
    	decimalnum = decimalnum / 8;
        temp = temp * 10;
    }

    return octalnum;
}
int main()
{
    int decimalnum;

    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);

    printf("Equivalent Octal Number: %d", decimalToOctal(decimalnum));

    return 0;
}


// octal to decimal

#include <stdio.h>
#include <math.h>
/* This function converts the octal number "octalnum" to the
 * decimal number and returns it.
 */
long octalToDecimal(int octalnum)
{
    int decimalnum = 0, temp = 0;

    while(octalnum != 0)
    {
        decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
        temp++;
        octalnum = octalnum / 10;
    }

    return decimalnum;
}
int main()
{
    int octalnum;

    printf("Enter an octal number: ");
    scanf("%d", &octalnum);

    printf("Equivalent decimal number is: %ld", octalToDecimal(octalnum));

    return 0;
}

// octal to binary
#include <stdio.h>
#include <math.h>
//This function converts octal number to binary number
long octalToBinary(int octalnum)
{
    int decimalnum = 0, i = 0;
    long binarynum = 0;

    /* This loop converts octal number "octalnum" to the
     * decimal number "decimalnum"
     */
    while(octalnum != 0)
    {
	decimalnum = decimalnum + (octalnum%10) * pow(8,i);
	i++;
	octalnum = octalnum / 10;
    }

    //i is re-initialized
    i = 1;

    /* This loop converts the decimal number "decimalnum" to the binary
     * number "binarynum"
     */
    while (decimalnum != 0)
    {
	binarynum = binarynum + (decimalnum % 2) * i;
	decimalnum = decimalnum / 2;
	i = i * 10;
    }

    //Returning the binary number that we got from octal number
    return binarynum;
}
int main()
{
    int octalnum;

    printf("Enter an octal number: ");
    scanf("%d", &octalnum);

    //Calling the function octaltoBinary
    printf("Equivalent binary number is: %ld", octalToBinary(octalnum));

    return 0;
}

//binary to octal

#include <stdio.h>
#include <math.h>
//This function converts binary number to octal number
int binaryToOctal(long binarynum)
{
    int octalnum = 0, decimalnum = 0, i = 0;

    /* This while loop converts binary number "binarynum" to the
     * decimal number "decimalnum"
     */
    while(binarynum != 0)
    {
        decimalnum = decimalnum + (binarynum%10) * pow(2,i);
        i++;
        binarynum = binarynum / 10;
    }

    //i is re-initialized
    i = 1;

    /* This loop converts the decimal number "decimalnum" to the octal
     * number "octalnum"
     */
    while (decimalnum != 0)
    {
        octalnum = octalnum + (decimalnum % 8) * i;
        decimalnum = decimalnum / 8;
        i = i * 10;
    }

    //Returning the octal number that we got from binary number
    return octalnum;
}
int main()
{
    long binarynum;

    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);

    // calling the function here
    printf("Equivalent octal value: %d", binaryToOctal(binarynum));

    return 0;
}