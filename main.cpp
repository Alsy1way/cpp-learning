#include <iostream>

using namespace std;


int main()
{
    double balance = 50000;
    double withdrawal;

    cout << "How much do you want to withdraw?: ";
    cin >> withdrawal;

    if(withdrawal > balance) {
        cout << "Insufficient funds";
    }else if(withdrawal <= 0){
        cout<< "Invalid Amount";
    }else{
        double total = balance - withdrawal;
        cout << "Your total balance is: " << total;
    }


    return 0;
}
