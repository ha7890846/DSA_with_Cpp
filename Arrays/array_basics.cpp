// 1-D _arrays_opr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Function to find or Search the element for deletion
int findElement(int array[], int size, int key)
{
    int i;
    // Finding & returning the position of the element 
    for (i = 0; i < size; i++)
        if (array[i] == key) {
            cout << "The position of key to be deleting is : " << i<<endl;
            return i;
        }
    return -1;
}
// Function to delete an element
// where array[] is the array from which element needs to be deleted
// size is the size of the array
// keyToBeDeleted is the element to be deleted from the array
int deleteElement(int array[], int size, int keyToBeDeleted)
{
    // Calling findElement function to get the position of the element which needs to be deleted

    int pos = findElement(array, size, keyToBeDeleted);
    // If element is not found then it prints Element not found
    if (pos == -1)
    {
        cout<<"Element not found"<<endl;
        return size;
    }
    // Otherwise it deletes the element & moves rest of the element by one position
    int i;
    for (i = pos; i < size - 1; i++)
        array[i] = array[i + 1];
    return size - 1;
}
//Function to Insert an element....
int insertElement(int arr[], int elements, int keyToBeInserted, int size) 
{ 
// Check if the capacity of the array is already full 
if (elements >= size) 
return elements; 
//If not then the element is inserted at the last index 
//and the new array size is returned
arr[elements] = keyToBeInserted;   
return (elements + 1); 
}  
// Main Function 
int main() 
{ 
    int arr[] = { 12,2,3,24,24 };       //size is not defined 
    int brr[10] = { 1 };                  //brr size will be fix to 10...
    int brr_size = 10;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Helllo there arr is:";
    for (auto v : arr) {
        cout << v << ", ";
    }
    // basic terminology to traverse array....
    cout << "\nThe brr is::";
    for (int i = 0; i < brr_size; i++) {
        cout << brr[i] << ", ";
    }
    cout << "\nThe size of arr is:" << arr_size << endl;
    cout << "The size of brr is:" << brr_size << endl;
    // Modification ....
    cout << "The value of arr[0] is:" << arr[0] << endl;
    arr[0] = 15;
    cout << "The arr[0] new value is:" << arr[0] << endl;
    int array[20] = { 31, 27, 3, 54, 67, 34 };
    int size = sizeof(array) / sizeof(array[0]); 
    int elements = 6; 
    int i, keyToBeInserted = 32; 
    cout<<"\nBefore Insertion The array is: "; 
    for (i = 0; i < elements; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
    // Calling the function to insert the element in the array
    elements = insertElement(array, elements, keyToBeInserted, size); 
    cout<<"n After Insertion of 32 array is: "; 
    for (i = 0; i < elements; i++) {
        cout << array[i]<<", ";
    }
    cout << endl;
    cout << "The array now is:\n\t";
    for (auto v : array) {
        cout << v << ", ";
    }
    // Calling the function to delete the element in the array...
    int key;
    cout << "\nEnter the key to delete:";
    cin >> key;
    deleteElement(array, size, key);
    cout << "The array after deleting " << key << " the array is:\n\t";
    for (auto v : array) {
        cout << v << ", ";
    }
    cout << endl;
    // concatenate two arrays...
    int crr[20] = {};
    
    
    for (int i = 0; i < arr_size; i++) {
        crr[i] = arr[i];
    }

    for (int i = 0; i < brr_size; i++) {
        crr[arr_size + i] = brr[i];
    }
    int crr_size = arr_size + brr_size;
    cout << "Let's Print crr:\n\t";
    for (int i = 0; i < crr_size;i++) {
        cout << crr[i]<< ", ";
    }
   return 0;
}