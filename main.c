#include "stdio.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_a(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(int *array, int start, int end)
{
    // for (int i = start;i<end-start;i++)
    // {
    //     printf("%d\t",array[i]);
    // }
    // printf("-----\n");
    if (start >= end)// 38, 65, 97, 76, 13, 27, 49
        return;
    int i = start;
    int j = end;
    int temp = array[start];
    while (i < j)
    {
        //        if (array[j] <= temp)
//        {
//            swap(&temp,&array[j]);
//        }
//        j--;

        while(i < j && array[j] >= temp)
        {
            j--;
        }
//         swap(&array[j],&array[i]);
        swap_a(array,i,j);



//        if (array[i] >= temp)
//        {
//            swap(&temp, &array[i]);
//        }
//        i++;
        while(i < j && array[i] <= temp)
        {
            i++;
        }
//          swap(&array[i],&array[j]);
        swap_a(array,i,j);




    }
//    array[i] = temp;
    quicksort(array,start,i-1);
    quicksort(array,i+1,end);
}
int a[] = {8, 5, 7, 0,6, 3, 4, 9};
int main()
{

    // printf("%d\n",sizeof(a)/sizeof(a[0]));
    quicksort(a, 0, sizeof(a)/sizeof(a[0])-1);
    for (int i = 0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
