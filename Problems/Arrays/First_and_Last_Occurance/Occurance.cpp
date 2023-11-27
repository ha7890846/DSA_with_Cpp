#include <iostream>
#include<algorithm>
using namespace std;

int firstOccurance(int arr[], int size, int target)
{
    int s, e;
    s = 0;
    e = size - 1;
    int first_occur=-1;
    while (s <= e)
    {
        //Extreme best case..
        if(arr[s]==target){
            return s;
        }
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            first_occur= mid;
            // e=mid-1;     this term is used in to else case....
        }
        // Normal Binary Search logic....
        if (arr[mid] < target)
        {
            // Goto left Sub Array.
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return first_occur;
}
int lastOccurance(int arr[], int size, int target)
{
    int s, e;
    s = 0;
    e = size - 1;
    int last_occur=-1;
    while (s <= e)
    {
        //Extreme Best case 
        if(arr[e]==target){
            return e;
        }
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            last_occur= mid;
            // s=mid+1;         this term will be apply in else case... 
        }
        // Normal Binary Search Logic....
        if (arr[mid] > target)
        {
            // Goto left Sub Array..
            e = mid - 1;
        }
        else
        {
        // Goto Right Sub Array...
            s = mid + 1;
        }
    }
    return last_occur;
}




int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "\t************* Enter the Elements with Repetition as Sorted array ****************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Element as a[ " << i << " ]:: ";
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << "Your Array is after sorting :: ";
    for (auto i : arr)
    {
        cout << i << ", ";
    }
    cout << endl;
    int size, key;
    size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the key value: ";
    cin >> key;
    int first_index = firstOccurance(arr, size, key);
    int last_index = lastOccurance(arr, size, key);
    // why here +1 as additional Dry Run and count int between first and last element...
    int total_occ=last_index-first_index+1;
    cout<<"The First Occurance of "<<key<<" is "<<first_index
    <<endl<<"The last Occurance of "<<key<<" is "<<last_index<<endl
    <<"The Total Occurance in Array is: "<<total_occ<<endl;
    return 0;
}