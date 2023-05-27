//Fig.7.8:fig07_08.cpp
//compute the sum of the elements of the array
#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 10;  //constant variable indicating siaxe of array
    int a[arraySize] = {87,68,94,100,83,78,85,91,76,87};
    int total = 0;

    //sum contents of array
    for (int i=0; i<arraySize; ++i)
        total +=a[i];

    cout<<"Total of array elements: "<<total<<endl;
}
