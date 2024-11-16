/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
double balance=1000;
int deposit=0;
int withdraw=0;
int password=1234;
int choice=0;
/** end variable ***/
void show() {
    cout<<"***** Menu *****"<<endl;
    cout<<"1:Balance "<<endl;
    cout<<"2:Withdraw "<<endl;
    cout<<"3:Deposit"<<endl;
    cout<<"4:Exit"<<endl;
    cout<<"           *********************           "<<endl;
}

void proccess() {
    cout<<"Enter Your password "<<endl;
    cin>>password;
  do{  
    if (password == 0000){
        cout<<" Enter Your Choice "<<endl;
       cin>>choice;
       
       switch(choice){
          case 1:
           cout<<"Your balance is "<<balance<<endl;
           break;
          case 2:
            cout<<"your balance is "<<balance<<endl;
            cout<<"  Enter your amount "<<endl;
            cin>>withdraw;
           if (withdraw> balance ){
               cout<<"Sorry You can,t Withdraw this amount "<<endl;
           }
           else{
               balance=balance-withdraw ;
               cout<<"Now Your balance is "<<balance<<endl;
               
           }
           break ;
          case 3:
            cout<<"Your curent ballance is "<<balance<<"\n"<<endl;
            cout<<"Enter your Deposit money "<<endl;
            cin>>deposit;
            balance=balance+deposit;
            cout<<"  Your balance is "<<balance<<endl;
          break;
         case 4:
           cout<<"Thank you "<<endl;
          break;
          
        }  
       }
    
    
    
      
       else {
          char option='o';
           cout<<"Password is Incorrect ,Do you want to try again ? Enter [Y] of Yes or [N] No" << "\t"<<endl;
          cin>>option;
          if (option == 'Y' || option=='y'){
              cout<<"Enter your Password "<<endl;
              cin>>password;
          }
          else {
              choice=4;
          }
          
      }}while(choice<4);
}

int main()
{ 
   show();
   proccess();

    return 0;
}