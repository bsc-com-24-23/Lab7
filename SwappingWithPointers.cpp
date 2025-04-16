#include <iostream>
using namespace std;

int swapNumbers(int &var1, int &var2){
  
    int temp = var1;
    var1 = var2;
    var2 = temp;

    return var1, var2;
}
int main()
{

    int *varA = nullptr;
    *varA = 20;
    int *varB = nullptr;
    *varB = 40;

    //Before swapping
    cout << "VarA before swapping: "<<varA<<endl;
    cout << "VarB before swapping: "<<varB<<endl;

    //calling swap function
    swapNumbers(*varA, *varB);

    cout << "VarA after swapping: "<< varA<<endl;
    cout << "VarB after swapping: "<< varB<<endl;

    return 0;
}
