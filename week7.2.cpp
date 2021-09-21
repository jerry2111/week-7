#include <iostream>
#include<algorithm>

using namespace std;


int main()
{
    int arr[10] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int x;
    int first=0;
    int last=9;
    int mid=4;
    cin >> x;

    sort(arr, arr + 10);

    while (true)
    {
        

        if (arr[mid] == x)
        {
            cout << "have";
            break;
        }
        else if (mid == last && mid == first)
        {
            cout << "don't have";
            break;
        }
        else if (arr[mid] > x)
        {
            last = mid-1;
        }
        else if (arr[mid] < x)
        {
            first = mid+1;
        }

        mid = (first + last) / 2;
        
    }

    



}
