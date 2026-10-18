#include <iostream>
using namespace std;

int main()
{
    int elements[20], n, i, search, low, high, mid;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements in sorted order: ";
    for(i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    cout << "Enter the element to search: ";
    cin >> search;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(elements[mid] == search)
        {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if(search < elements[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Element not found";

    return 0;
}