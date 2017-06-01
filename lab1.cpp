#include <iostream>
#include <string>
using namespace std;

void bubblesort(string array[],int len){
    for (int i = 0; i<len; i++){
        for (int j = 0; j<len-i-1; j++){
            if (array[j]>array[j+1]){
                //swap
                string temp = array[j];
                array [j] = array [j+1];
                array[j+1] = temp;
            }
        }
    }

}

int main()
{
    cout << "Hello World! This is Shrijan and this is my first lab" << endl;
    cout << "This is lab1.cc"<< endl;
    string array[] = {"Shrijan","Pranaya","Ashok","Aashish"};
    int len = sizeof(array)/sizeof(array[0]);
    //Print the contents of the unsorted array
    cout << "\n**** Printing unsorted array ****"<<endl;
    for (int i = 0; i<len; i++){
        cout << array[i]<<" ";
    }
    bubblesort(array,len);
    //Print the contents of sorted array
    cout << "\n\n**** Printing unsorted array ****"<<endl;
    for (int i = 0; i<len; i++){
        cout << array[i]<<" ";
    }
    return 0;
}

//Output
/*
 Hello World! This is Shrijan and this is my first lab
 This is lab1.cc
 
 **** Printing unsorted array ****
 Shrijan Pranaya Ashok Aashish
 
 **** Printing unsorted array ****
 Aashish Ashok Pranaya Shrijan Program ended with exit code: 0
 */
