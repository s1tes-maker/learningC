// MyCMake.cpp: определяет точку входа для приложения.
//

#include "inout.h"

using namespace std;

#include <algorithm>

int main() {
    //vector<int> vec{ 0, 1, 2, 3, 10, 5, 6, 7, 8, 9 };
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}

