/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "big_number.h"

int main()
{
    char str[] = "-12345312312341245123412312312312";
    BigNumber* bn = CreateBN(str);
    if (bn == NULL)
        printf("bn == NULL!\n");
        
    PrintBN(bn);
    
    DeleteBN(&bn);
    
    PrintBN(bn);

    return 0;
}
