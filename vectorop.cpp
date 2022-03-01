#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int in, pos, ch;
    vector<int>::iterator it;
    while (1)
    {
        cout << " \n\n 1.Find no of elements in the vector\n 2.Check whether the vector is empty or not\n 3.Insert some elements into the vector\n 4.Remove the element at a particular position\n 5.Find the index of a particular element in the vector\n 6.Exit\n ";
        cout << "\nEnter the choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "The no of elements is " << arr.size() << '\n';
            break;
        case 2:
            if (arr.empty())
                cout << "The vector is empty\n";
            else
                cout << "The vector is not empty\n";
            break;
        case 3:
            do
            {   cout<<"Enter element\n";
                cin >> in;
                arr.push_back(in);
                cout << "Enter 1 to continue\n";
                cin >> ch;
            } while (ch == 1);
            break;
        case 4:
            cout << "Enter the position to delete element\n";
            cin >> pos;

            cout << "The element removed is " << arr.at(pos) << '\n';
            arr.erase(arr.begin() + pos);
            break;

        case 5:
            cout << "Enter the element to find position\n";
            cin >> in;
            for (it = arr.begin(); it != arr.end(); it++)
            {
                if (*it == in)
                {
                    cout << "Element found at index " << it - arr.begin() << '\n';
                    break;
                }
            }
            if (it == arr.end())
                cout << "Element not found\n";
            break;
        case 6:
            exit(0);
        default:
            cout << "Enter valid option\n";
        }
    }
    return 0;
}