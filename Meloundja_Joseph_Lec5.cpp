//Meloundja Joseph
//10/7/2024
//Lecture 5

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    double startAmount;
    double transactionsAmount; 
    double transMoney;
    string typeOf;

    cout << "How much money does your bank account have at the start of the day?" << endl; // asking the user the start amount
    cin >> startAmount;

    cout << "How many bank transactions did you make that day?" << endl; // asking the iser for amount of transactions
    cin >> transactionsAmount;

    while(transactionsAmount > 0)
    {
        cout << "what type of transaction? Please enter either credit or debit!" << endl;
        cin >> typeOf;
        cout<< "how much was the tranaction?"<< endl;
        cin>> transMoney;
        if ( typeOf == "debit")
        {
            cout<< (startAmount - transMoney) << endl;
        }

        else
        {
            cout << (startAmount + transMoney) << endl;
        }
        

        


    }

  

   


}