#include <bits/stdc++.h>
using namespace std;

class account                               //sub class
{
    int accNo, bal;
    
    public:
        account(int num, int balance)
        {
            accNo = num;
            bal = balance;
        }

        void printAccount()
        {
            cout<<"Account number : "<<accNo<<endl;
            cout<<"Account balance : "<<bal<<endl;
        }
};

class person
{
    int age;
    char *name;
    account *acc;


    public:
        person(char *n, int a)
        {
            name = new char[strlen(n)+1];
            strcpy(name, n);
            age = a;
            acc = NULL;
        }

        void addAccount(int num, int bal)
        {
            acc = new account(num, bal);
        }

        void printPerson()
        {
            cout<<"Name : "<<*name<<endl;
            cout<<"Age : "<<age<<endl;
            (*acc).printAccount();
        }
};

int main()
{
    char name[] = "Chitransh";
    person p1(name,20);
    p1.addAccount(5042,20543);
    p1.printPerson();
}