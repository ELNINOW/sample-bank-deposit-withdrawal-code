#include <iostream>
using namespace std;

class Account{
    
private:

    string name;
    double balance;
    
public:

    void set_balance(double bal){
    balance= bal;}
    
    double get_balance(){
    return balance;}
    
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
    };
    
void Account::set_name(string n){
    name=n;
} 

string Account::get_name(){
    return name;
    
}

bool Account::withdraw(double amount){
    if (balance-amount>=0){
        balance-=amount;
        return true;
    }
    else{
        return false; 
        
    }
    }


int main(){
    Account frank_account;
    frank_account.set_name("Franks account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout<<"Deposit ok"<<endl;
        
    elsecout<<"Deposit not allowed"<<endl;
    
    if(frank_account.withdraw(500.0))
        cout<<"Withdrawal ok" << endl;
    else
        cout<<"Not sufficient funds"<< endl;
    if(frank_account.withdraw(1500.0))
        cout<<"Withdraw ok"<<endl;
    else
        cout<< "No sufficient funds"<<endl;
        
    if (frank account.withdraw(1500.0))
        cout<<"withdraw okay"<<endl;
        
    
        
}

    
    
    
