//Name: Preetinder Singh
//Roll No. : 2010990548
//Set : 03

//Question 1:
#include <bits/stdc++.h>
using namespace std;

void swapAlternateElement(int array[], int size)
{
    for(int i = 1; i < size; i += 2)
    {
        if(array[i - 1] > array[i]) {
            swap(array[i - 1],array[i]);
        }
        if(i + 1 < size && array[i + 1] > array[i]) {
            swap(array[i + 1],array[i]);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
    	cout<<"Enter the element at "<<i<<" index : ";
        cin>>array[i];
    }
    
    swapAlternateElement(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
