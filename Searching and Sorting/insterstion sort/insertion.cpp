#include<iostream>
using namespace std;

void print(int arr[]){
    for (int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[]){
    int key;

    //It allways start with 2nd element in array;
    //So, here i=1;
    for (int i=1; i<5; i++)  
    {
        key = arr[i];
        int j = i-1;
        while (arr[j]>key && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;

    }

}

int main()
{
    int arr[5] = {9,5,1,4,3};
    cout<<"UNSORTED ARRAY: "<<endl;
    print(arr);
    sort(arr);
    cout<<"SORTED ARRAY: "<<endl;
    print(arr);

    return 0;
}