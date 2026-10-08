#include <iostream>
#include "Array.h"
using namespace std;

void task4()
{
    int arr[] = { 2, 5, 2, 7, 5, 2, 9 };
    int size = 7;

    int number = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            number = arr[i];
        }
    }

    cout << "Number = " << number << endl;
}