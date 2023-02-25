#include<iostream>
using namespace std;
int n;
void print(int arr[]){
    
}

void sort(int arr[]){
    int key;

    //It allways start with 2nd element in array;
    //So, here i=1;
    for (int i=1; i<n; i++)  
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
    int k;
    cout<<"FOR INFINITE TIME PROGRAM ENTER number 1: "<<endl;
    cin>>k;
    do{
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int arr[n];
    //Taking array input;
    cout<<"Enter Elements of array: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Element: "<<i<<endl;
        cin>>arr[i];
    }
    cout<<endl;
    
    cout<<"Elements of array is: "<<endl;
     for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"UNSORTED ARRAY: "<<endl;
     for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr);
    cout<<"SORTED ARRAY: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}while(k!=0);

    return 0;
}