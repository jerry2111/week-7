
#include <iostream>

using namespace std;


int main()
{
    int arr[10] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int x;
     
    cin >> x;

    for (int a = 0; a < 10; a++)
    {
        if (arr[a] == x)
        {
            cout << "have";
            break;
        }
        if (a == 9)
        {
            cout << "did't have";
        }
    }

}

