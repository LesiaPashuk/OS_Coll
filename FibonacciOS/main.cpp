//
//  main.cpp
//  labFibbonacci
//
//  Created by vvv on 11.02.2025.
//
#include <iostream>
//#include "src/fibonacci.cpp"
#include "src/fibonacci.h"


using namespace std;


int main(int argc, const char* argv[]) {
    int n;
    cin >> n;


    Fibonacci<int> f;


    try
    {
        vector<int> a = f.getFirstN(n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
