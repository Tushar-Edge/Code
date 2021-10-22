#include<iostream>
using namespace std;
void rotate (int a[], int no, int d)
{
  int temp = a[0];
  for (int j = 0; j < d; j++)
    {
      temp = a[0];
      for (int i = 0; i < no - 1; i++)
	{
	  a[i] = a[i + 1];

	}
      a[no - 1] = temp;

    }



}

void Accept_print (int a[],int l,int flag)
{

  for (int i= 0; i < l; i++)
    {
      if (flag == 0)
	{
	  cin >> a[i];
	}
      else
	   cout << a[i];

    }


}

int main ()
{
  int n;
  cout << "Enter the length of the array"<<endl;
  cin >> n;

  int arr[n];
  cout << "Enter the number"<<endl;
  Accept_print (arr, n, 0);

   int no_of_rot;
   cout << "Enter the number of rotations"<<endl;
   cin >> no_of_rot;



  cout << "given array "<<endl;
  Accept_print (arr, n, 1);
  rotate (arr, n, no_of_rot);
  cout<<endl;
  cout << "The array after    " << "  " << no_of_rot << "   rotations is   "<<endl;;
  Accept_print (arr, n, 1);


}

