#include <iostream>
using namespace std;

<<<<<<< HEAD
int sum_array(int[] a, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += a[i];
=======
int sum_array(int[] a, int n){
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
         sum += a[i];
>>>>>>> branch_Sinh
    }
    return sum;
}

void main{
<<<<<<< HEAD
    cout << "Hello world"; 
    cout << endln;
    
=======
    cout << "Hello world" << endl;
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Tong mang {1, 2, 3, 4, 5} la: " << sum_array(a, 5) << endl;
>>>>>>> branch_Sinh
}