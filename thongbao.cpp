#include <iostream>
using namespace std;

int sum_array(int[] a, int n){
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
         sum += a[i];
    }
    return sum;
}

void main{
    cout << "Hello world" << endl;
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Tong mang {1, 2, 3, 4, 5} la: " << sum_array(a, 5) << endl;
}