#include <iostream>
using namespace std;

// Class for Merge Sort
class MergeSort
{
public:
    // Function to divide the array into smaller parts
    void divide(int elements[], int low, int high)
    {
        int mid;
        // [3,5,6,1,9,8]
        // [3,5,6]
        // Continue dividing until only one element remains
        if (low < high)
        {
            // Find the middle position
            mid = (low + high) / 2;

            // Divide the left half
            divide(elements, low, mid);

            // Divide the right half
            divide(elements, mid + 1, high);

            // Merge the two sorted halves
            merge(elements, low, mid, high);
        }
    }

    // Function to merge two sorted sub-arrays
    void merge(int elements[], int low, int mid, int high)
    {
        int i = low;       // Starting index of left sub-array
        int j = mid + 1;   // Starting index of right sub-array
        int k = low;       // Starting index of temporary array

        int temp[20];

        // Compare elements from both sub-arrays
        // and store the smaller element in temp
        while (i <= mid && j <= high)
        {
            if (elements[i] < elements[j])
            {
                temp[k] = elements[i];
                k++;
                i++;
            }
            else
            {
                temp[k] = elements[j];
                k++;
                j++;
            }
        }

        // Copy remaining elements from the left sub-array
        while (i <= mid)
        {
            temp[k] = elements[i];
            k++;
            i++;
        }

        // Copy remaining elements from the right sub-array
        while (j <= high)
        {
            temp[k] = elements[j];
            k++;
            j++;
        }

        // Copy the sorted elements back to the original array
        for (i = low; i <= high; i++)
        {
            elements[i] = temp[i];
        }
    }

    // Function to display the sorted array
    void display(int elements[], int low, int high)
    {
        cout << "\nSorted elements are: ";

        for (int i = low; i <= high; i++)
        {
            cout << elements[i] << "\t";
        }

        cout << endl;
    }
};

// Main function
int main()
{
    int elements[20];
    int n;

    // Create an object of MergeSort
    MergeSort ms;

    // Get the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Get the array elements
    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    // Perform Merge Sort
    ms.divide(elements, 0, n - 1);

    // Display the sorted elements
    ms.display(elements, 0, n - 1);

    return 0;
}
