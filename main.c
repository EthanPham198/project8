#include <stdio.h>

int isValidISBN(int isbn)
{
    int n;
    int result = 1;
    if (n != 10)
        result = 0;
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        int digit = isbn[i] - 0;
        if (0 > digit || 9 < digit)
            result = 0;
        sum += (digit * (10 - i));
    }
    char last = isbn[9];
    if (last != 'X' && (last < '0' || last > '9')){
        result = 0;
    }
    sum += ((last == 'X') ? 10 :
                  (last - 0));
    return result;
}


int main()
{
    int isbn = 0074625420;
    if (isValidISBN(isbn)==1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}