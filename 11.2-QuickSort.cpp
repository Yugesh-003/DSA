#include <iostream>
using namespace std;

// Class for Quick Sort
class QuickSort
{
public:
    // Function to divide the array using the pivot
    void divide(int elements[], int low, int high)
    {
        int pivot_position;

        // Continue partitioning while more than one element exists
        if (low < high)
        {
            // Partition the array and find the pivot position
            pivot_position = conquer(elements, low, high);

            // Apply Quick Sort to the left sub-array
            divide(elements, low, pivot_position - 1);

            // Apply Quick Sort to the right sub-array
            divide(elements, pivot_position + 1, high);
        }
    }

    // Function to partition the array
    int conquer(int elements[], int low, int high)
    {
        int pivot;
        int i;
        int temp;

        // Select the last element as the pivot
        pivot = elements[high];

        // i keeps track of the position for elements
        // smaller than or equal to the pivot
        i = low;

        // Compare each element with the pivot
        for (int j = low; j < high; j++)
        {
            if (elements[j] <= pivot)
            {
                // Swap elements[i] and elements[j]
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;

                i++;
            }
        }

        // Place the pivot in its correct position
        temp = elements[i];
        elements[i] = elements[high];
        elements[high] = temp;

        // Return the final position of the pivot
        return i;
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

    // Create an object of QuickSort
    QuickSort qs;

    // Get the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Get the array elements
    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    // Perform Quick Sort
    qs.divide(elements, 0, n - 1);

    // Display the sorted elements
    qs.display(elements, 0, n - 1);

    return 0;
}
