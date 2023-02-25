#include<iostream>
using namespace std;

int n;
void sort(int arr[]){

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    
}
int main()
{
    do{
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elemets of array"<<endl;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter number "<<i<<" = ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"UNSORTED ARRAY: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"SORTED ARRAY: "<<endl;
    
    //calling sorting function
    sort(arr);

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }while(n!=0);
    return 0;
}