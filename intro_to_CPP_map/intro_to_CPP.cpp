#include <vector>
#include <string>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

vector<int> print_list(vector<int> vec)
{

    for (int val : vec)
    {
        cout << val << endl;
    }
    return vec;
}

vector<int> add_number(vector<int> vec)
{
    int number{};

    cout << "Type in the number you want to add";
    cin >> number;

    vec.push_back(number);

    cout << number << " Added" << endl;

    return vec;
}

vector<int> display_mean_vector(vector<int> vec)
{

    int sum{};
    int size = vec.size();

    for (int val : vec)
    {
        sum += val;
    }

    cout << sum / size << endl;
    return vec;
}

vector<int> display_smallest_number(vector<int> vec)
{
    int smaller = vec[0];

    for (size_t i = 1; i < vec.size(); i++)
    {
        if (smaller > vec[i])
        {
            smaller = vec[i];
        }
    }

    cout << smaller << endl;
    return vec;
}

vector<int> display_largest_number(vector<int> vec)
{

    int larger = vec[0];

    for (size_t i = 1; i < vec.size(); i++)
    {
        if (larger < vec[i])
        {
            larger = vec[i];
        }
    }

    cout << larger << endl;
    return vec;
};

void quit()
{
    exit(0);
}

void list_manipulation(vector<int> vec)
{
    char user_choice{};

    cout << "Options:" << endl;
    cout << "P - print numbers" << endl;
    cout << "A -Add a number" << endl;
    cout << "M - Display mean of the numbers " << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\n";
    cout << "Enter your choice:";

    cin >> user_choice;

    vector<int> vec1{};

    switch (user_choice)
    {
    case 'p':
    case 'P':
        vec1 = print_list(vec);
        list_manipulation(vec1);

        break;
    case 'a':
    case 'A':
        vec1 = add_number(vec);
        list_manipulation(vec1);
        break;
    case 'm':
    case 'M':
        vec1 = display_mean_vector(vec);
        list_manipulation(vec1);
        break;
    case 's':
    case 'S':
        vec1 = display_smallest_number(vec);
        list_manipulation(vec1);
        break;
    case 'l':
    case 'L':
        vec1 = display_largest_number(vec);
        list_manipulation(vec1);
        break;
    case 'q':
    case 'Q':
        quit();
        break;
    default:
        cout << "Invalid command";
        break;
    }
}

int main()
{

    vector<int> vec{1, 2, 3, 4, 5, 6};

    list_manipulation(vec);
}