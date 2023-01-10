#include<iostream>

#include"combine.h"

using namespace std;

void mergeSort(int left, int right,int *data)

{

    if (left < right)

    {

       int mid = (left + right) / 2;

       mergeSort(left, mid, data);

       mergeSort(mid + 1, right,data);

       combine(left, mid, right,data);


    }

}


int main(){

    int data[16] = { 100, 200, 33, 18, 55, 60, 65, 43, 5, 7, 88, 93, 1, 17,19,122}; // elements

    int index=0;

     mergeSort(0, 15, data);

    while (index<16)       

    {

        cout<<data[index];

        cout<<"\n";

       index=index+1;

               }
              

    return 0;

}
