#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    cout << *n1  << *n2;
}

int main()
{
    int num1, num2;
    cout << "Enter the Numbers to swap : " << endl;
    cin >> num1 >> num2;
    cout << "Swaped Numbers are: ";
    swap(&num1, &num2);
    return 0;
}