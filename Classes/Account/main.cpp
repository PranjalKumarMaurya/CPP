#include <iostream>
#include "Account.h"
#include "Account.cpp"
int main() {
    Account person;
    person.set_name("Pranjal");
   person.set_balance(100000);

    cout << person.get_name() << endl;
    cout << person.get_balance() << endl;
    return 0;
}