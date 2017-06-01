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
    int len = 0;
    cout << "How many names would you like to sort ?: ";
    cin >> len;
    string array[len] ;
    string name;
    for (int i = 0; i < len; i++){
        cout << "Enter the name: ";
        cin >> name;
        array[i] = name;
    }
    cout << "\n**** Printing unsorted array ****"<<endl;
    for (int i = 0; i<len; i++){
        cout << array[i]<<" ";
    }
    bubblesort(array,len);
    //Print the contents of sorted array
    cout << "\n\n**** Printing sorted array ****"<<endl;
    for (int i = 0; i<len; i++){
        cout << array[i]<<" ";
    }
    return 0;
}

//Output
/*
 Hello World! This is Shrijan and this is my first lab
 This is lab1.cc
 How many names would you like to sort ?: 4
 Enter the name: Strawberry
 Enter the name: Banana
 Enter the name: Apple
 Enter the name: Google
 
 **** Printing unsorted array ****
 Strawberry Banana Apple Google
 
 **** Printing sorted array ****
 Apple Banana Google Strawberry
 */
