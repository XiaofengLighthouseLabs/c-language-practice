#include <stdio.h>
#include <stdlib.h>

void arrayRot1(int ar[], int size);
void arrayRotn(int ar[], int size, int n);

int main()
{
    int ar[] = {1, 2, 3, 0, 2, 1};
    int i;
    arrayRot1(ar, 6);
    arrayRotn(ar, 6, 3);

    for(i = 0; i < 6; i++)
    {
       printf("%d ", ar[i]);
    }
}

arrayRot1(int ar[], int size)
{
    //1 2 3 0 2 1 --> 1 1 2 3 0 2
    int temp;
    int i;
    temp = ar[size - 1];
    for(i = size - 2; i >= 0; i = i - 1)
    {
        ar[i + 1] = ar[i];
    }
    ar[0] = temp;
}

void arrayRotn(int ar[], int size, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        arrayRot1(ar, size);
    }
}
