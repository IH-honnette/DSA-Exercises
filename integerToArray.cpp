#include <iostream>
#include <vector>
using namespace std;

vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
    resultArray.insert(resultArray.begin(), x%10);
    x /= 10;
    if(x == 0)
        return resultArray;
    }
}

int main()
{
    vector <int> temp = integerToArray(1234567);
    for (auto const &element : temp)
        cout << element << " " ;
    return 0;
}
