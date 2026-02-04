#include<iostream>
using namespace std;

class Wallet{

private:
    int walletID;
    string username;
    float balance;

public:
    Wallet(int id,string name,float bal=0){
        walletID=id;
        username=name;
        balance=bal;
    }

    void loadmoney(){
        float amount;
        cout<<"Enter amount to load: ";
        cin>>amount;

        if( amount<=0)
            cout<<"Invalid Amount!"<<endl;
        else{
            balance=balance+amount;
            cout<<"money loaded successfully!"<<endl;
        }
}

    void transfermoney(Wallet &reciever){
        float amount;
        cout<<"Enter amount to transfer: ";
        cin>>amount;
        if( amount<=0||amount>balance)
            cout<<"Insufficient balance! or Invalid amount!"<<endl;
        else{
            balance=balance-amount;
            reciever.balance=reciever.balance+amount;
            cout<<"money transfered successfully!"<<endl;
        }
}

    void displaydetails(){
        cout<<"wallet ID: "<<walletID <<endl;
        cout<<"User name: "<<username <<endl;
        cout<<"Current balance: "<<balance <<endl;
    }
};

int main(){
    Wallet w1(101, "Omi", 2000);
    Wallet w2(102, "maitri", 5000);

    w1.loadmoney();
    cout<<endl;

    cout<<"---Wallet Details after money loading---"<<endl;
    w1.displaydetails();
    w2.displaydetails();

    w1.transfermoney(w2);
    cout<<endl;

    cout<<"---Wallet Details after money transfer---"<<endl;
    w1.displaydetails();
    w2.displaydetails();

    return 0;
}
