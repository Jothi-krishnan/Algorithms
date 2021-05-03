#include<iostream>
using namespace std;

int * Bubble_sort(int array[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return array;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];

    Bubble_sort(a, n);
    for(int i = 0; i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}