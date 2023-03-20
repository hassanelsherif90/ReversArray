#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int RandNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void Swap (int &A, int &B)
{
    int Swap = A;
    A = B;
    B = Swap;
}
void FillArray(int arr[100], int &arrlength)
{
    for (int i =0 ; i < arrlength; i++)
    {
        arr[i] = RandNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrlength)
{
    for (int i =0 ; i < arrlength; i++)
    {
         cout << arr[i] << " " ;
    }
}

void ReverseArray (int arr[100],int arr2[100],  int arrlength)
{
     for (int i =0 ; i < arrlength; i++)
     {
        arr2[i]= arr[arrlength - 1 - i];

     }
}
int main ()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;
    arrlength = ReadPositiveNumber ("Enter Number of array ");
    FillArray(arr, arrlength);
    cout << "\nArray 1 elements : \n";
    PrintArray(arr, arrlength);

    int arr2[100];
    ReverseArray(arr, arr2, arrlength);
    cout << "\nArray 2 elements after copy array 1 reversed : \n";
    PrintArray(arr2, arrlength);


    return 0;
}
