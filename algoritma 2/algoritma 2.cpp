// algoritma 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionsort() {
    int i, n, temp, j;
    int arr[9];

    for (i = 1; i <= n - 1; i++) {//step 1

        temp = arr[i];//step 2

        j = i - 1;

        while (j >= 0 && arr[j] > temp)//step3 
        {
            arr[j + 1] = arr[j];//step 4a
            j--; // step 4b

        }

        arr[j + 1] = temp; // step 5

    }

}

    
    
    


int main()
{
    
}

