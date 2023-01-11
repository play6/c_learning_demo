#include <stdio.h>
#include <stdlib.h>

int getRandomInt(void) 
{
    return rand();
}

int getSpecialInt(void)
{
    return 86;
} 

void populate_array(int *array, size_t arraySize, int (*getInt)(void))
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getInt();
    }
}

int main()
{
    int length = 10;
    int myarray[length];
    populate_array(myarray,length,getRandomInt);
    for (int i = 0; i < length; i++)
    {
        printf("%d | ", myarray[i]);
    }
    printf("\n");
    populate_array(myarray,length,getSpecialInt);
    for (int i = 0; i < length; i++)
    {
        printf("%d | ", myarray[i]);
    }
    printf("\n");
    return 0;

}