//Name: Preetinder Singh
//Roll No. : 2010990548
//Set : 03

//Question 2:
#include <bits/stdc++.h>
using namespace std;

void findPairSum(int array[], int size, int sum)
{
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        if (m.find(sum - array[i]) != m.end())
        {
            cout << "Pair found (" << array[m[sum - array[i]]] << ", "<< array[i] << ")\n";
            return;
        }
        m[array[i]] = i;
    }
    cout << "Pair not found";
}

int main()
{
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
    	cout<<"Enter the element at "<<i<<" index: ";
        cin>>array[i];
    }
    int sum;
    cout<<"Enter the value of target sum:";
    cin>>sum;
    
    findPairSum(array,size,sum);

    return 0;
}