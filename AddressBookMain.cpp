#include<iostream>
#include<string>
#include<list>
#include "AddressBookOperations.h"
// #include<stdlib.h>

using namespace std;

int main()
{
    cout<<"-------Welcome to Address Book--------"<<endl;

    addressBook_Operations operations;
   
    int choice;
    int repeat = 1;
    while(repeat == 1) {
      cout<< "Enter The Choice  \n1. Add The Person \n2. View Records" <<endl;
      cin >> choice;
      cin.ignore(1, '\n');
      switch(choice) {
        case 1:
             operations.addPerson();
             break;
        case 2:
             operations.displayRecords();
             break;
        default:
            cout << "Invalid choice!" <<endl;
            break;
     }
      cout << "To continue press 1\n and for exit press any number " << endl;
      cin >> repeat;
    }

    if(repeat != 2){
         cout << "Exit" << endl;
    }

     return 0;
}