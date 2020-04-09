#include<iostream>
#include<string>
#include <fstream>

using  namespace std;



class ATM {
    
public:
    
    float bankBalance;
    
    ATM() {
        
        bankBalance = 100;
        
    }//end atm

    
    //check balance
    void checkBalance() {
        cout<<bankBalance<<endl;
        
    }//end check balance
    
    void depositCash() {
        float cashEntered;
        cout<<"how much do you want to deposit?: "<<endl;
        cin>>cashEntered;
        bankBalance +=cashEntered;
        
        cout<<"this is your current babalnce: "<<bankBalance<<endl;
        
      
        
    }//end deposit cash
    
    
    
    void withdrawCash() {
        cout<<"how much money do you want to take out?"<<endl;
        int with;
        cin>>with;
        
        if(with%20==0 &&with>=20){
        if (with<=bankBalance){
        bankBalance -= with;
        cout<<"this is your current balance: "<<bankBalance<<endl;
        }//end if
        else{
            cout<<"please enter a smaller number, you do not have enought money"<<endl;
        }
        }//end if
        else
            cout<<"enter a multiple of 20"<<endl;

        
        
    }//end withdraw cash
    
};



int main() {
    ATM myMachine;
    myMachine.checkBalance();
    myMachine.depositCash();
    myMachine.withdrawCash();
    
    
}
