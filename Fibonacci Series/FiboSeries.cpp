#include <iostream>
using namespace std;


  
    
int main()
{
    int num;
    cout << "Enter the number upto which you want the series!" << endl;
    cin >> num;
    cout << "The series is\n";
      int num1, num2;
    int n1 = 0, n2 = 1;

    for (int i = 1; i < num + 1; ++i)
    {
        if (i == 1)
        {
           cout<<n1<<", ";
            continue;
        }
        if (i == 2)
        {
            cout<<n2<<", ";
            continue;
        }
        num1 = n1 + n2;
        n1 = n2;
        n2 = num1;

        cout<<num1<<", ";

        
}

return 0;
}
