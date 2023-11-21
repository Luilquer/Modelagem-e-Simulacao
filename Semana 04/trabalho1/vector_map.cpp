#include <iostream>
#include <vector>
using namespace std;

using mapfn = int (*)(int);

vector<int> map(vector<int> v, mapfn fn)
{
    vector<int> newVector;

    for (auto el : v)
    {
        newVector.push_back((*fn)(el));
    }

    return newVector;
}

int main()
{

    auto square = [](int x)
    {
        return x * x;
    };

    // cout << square(456);

    vector<int> nums = {1, 2, 3, 4};
    vector<int> squares = map(nums, square);

    for (auto n : nums)
    {
        cout << n << "\t";
    }

    //multiplica cada elemento do vector
    // for (auto num : nums)
    // {
    //     squares.push_back(square(num));
    // }

    cout << " \n ";
    for (auto sq : squares)
    {
        cout << sq << "\t";
    }

    return 0;
}