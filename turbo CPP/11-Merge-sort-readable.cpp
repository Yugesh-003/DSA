// Merge sort - readable version with descriptive variable names (Turbo C++)
#include<iostream.h>
#include<conio.h>

class merge_sort
{
public:
    // splits the array in half recursively until single elements remain
    void divide(int elements[], int leftStart, int rightEnd)
    {
        int mid;
        if (leftStart < rightEnd)
        {
            mid = (leftStart + rightEnd) / 2;
            divide(elements, leftStart, mid);        // sort left half
            divide(elements, mid + 1, rightEnd);     // sort right half
            merge(elements, leftStart, mid, rightEnd); // merge both halves
        }
    }

    // merges two sorted halves: [leftStart..mid] and [mid+1..rightEnd]
    void merge(int elements[], int leftStart, int mid, int rightEnd)
    {
        int leftPtr  = leftStart;  // pointer walking through left half
        int rightPtr = mid + 1;    // pointer walking through right half
        int tempPtr  = leftStart;  // pointer writing into temp array
        int temp[20];

        // pick the smaller of the two current elements and copy to temp
        while (leftPtr <= mid && rightPtr <= rightEnd)
        {
            if (elements[leftPtr] < elements[rightPtr])
            {
                temp[tempPtr] = elements[leftPtr];
                tempPtr  = tempPtr + 1;
                leftPtr  = leftPtr + 1;
            }
            else
            {
                temp[tempPtr] = elements[rightPtr];
                tempPtr  = tempPtr + 1;
                rightPtr = rightPtr + 1;
            }
        }

        // copy any remaining elements from the left half
        while (leftPtr <= mid)
        {
            temp[tempPtr] = elements[leftPtr];
            tempPtr = tempPtr + 1;
            leftPtr = leftPtr + 1;
        }

        // copy any remaining elements from the right half
        while (rightPtr <= rightEnd)
        {
            temp[tempPtr] = elements[rightPtr];
            tempPtr  = tempPtr + 1;
            rightPtr = rightPtr + 1;
        }

        // copy sorted temp back into the original array
        for (int idx = leftStart; idx <= rightEnd; idx++)
        {
            elements[idx] = temp[idx];
        }
    }

    void display(int elements[], int low, int high)
    {
        int idx;
        cout << "Sorted elements are: ";
        for (idx = low; idx <= high; idx++)
        {
            cout << elements[idx] << "\t";
        }
    }
};

void main()
{
    clrscr();
    int elements[20], size, idx;
    merge_sort ms;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements: ";
    for (idx = 0; idx < size; idx++)
    {
        cin >> elements[idx];
    }
    ms.divide(elements, 0, size - 1);
    ms.display(elements, 0, size - 1);
    getch();
}
