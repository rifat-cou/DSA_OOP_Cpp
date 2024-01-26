#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]; //declare an array with size of 5 without assign value.
                /*Declaration of Array= data_type name [size]
                you can use long long, float, char etc as a datatype*/

    int ar[] ={1, 2, 3, 4, 5, 6, 7}; /*declare with value. If we assign size of array it's no problem
                                but the size must be greter or eqaul to number of assigned value.
                                In this case size will be >=7. If size will >7 then non assigned value 
                                automatically store zero(0).*/

    int n=sizeof(ar)/sizeof(ar[0]);//find the size of array.
    cout<<n<<endl;

    int a[5]={0}; //Declare and assign same value in every unit.

    for(int i=0; i<5; i++)//taking input in array
        cin>>a[i];

    for(int i=0; i<5; i++)//show output from array.
        cout<<a[i]<<" ";
}
