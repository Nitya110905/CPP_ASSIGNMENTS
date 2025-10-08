// Define a class to represent a bank account. Include the 
// following members: 
// Data Member: 
// -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
// Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance

#include<iostream>
#include<string>
using namespace std;

class Bank{
    string name,acc_type;
    int acc_no;
    float balance ;

    public:
    void setvalues(string name ,string acc_type ,int acc_no , float balance ){
        this->name = name;
        this->acc_type = acc_type;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void deposit(float amt){
        balance += amt;
        cout << "\nAmount " << amt << " Deposited!!!";
        cout << "\nCurrent balance : " << balance;
    }

    void withdraw(float amt){
        if(balance >= amt){
            balance -= amt;
            cout << "\nAmount " << amt << " Withdrawn!!!";
            cout << "\nCurrent balance : " << balance;
        }
        else{
            cout << "\nInsufficient Balance!!!";
        }
    }

    void display(){
        cout << "\nName : " << name;
        cout << "\nBalance : " << balance;
    }
};

int main(){
    Bank b;
    b.setvalues("ABC" , "Savings" , 12340987 , 10000);
    b.deposit(5000);
    b.withdraw(7000);
    b.display();

    Bank b1;
    b1.setvalues("DEF" , "Current" , 45677654 , 1000);
    b1.deposit(2000);
    b1.withdraw(5000);
    b1.display();

    return 0;
}