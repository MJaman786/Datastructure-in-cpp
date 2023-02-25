#include<iostream>
using namespace std;
//size of array
int n;

//sorting function
void sort(int arr[])
{
  for (int i = 0; i <n; i++)
	{
    for (int j = 0; j < n - i - 1; j++) 
	{
      if (arr[j] > arr[j + 1]) 
	  {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {

  int d; //This is for seeing output in cmd; 

  cout<<"Enter size of array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter elements of array: "<<" "<<endl;

        for (int i = 0; i < n; i++)
      {
          cin>>arr[i].split();
          cout<<" ";
      }

      cout<<endl;

  cout<<"unsorted Array : "<<endl;
  for (int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  sort(arr);
  cout<<"Sorted Array : "<<endl;
  for (int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }

    cin>>d;
    
      return 0;
}