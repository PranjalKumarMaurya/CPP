#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

using namespace std;

class Account {
    private:
      string name;
      double balance;

    public:
      void set_name(string n) { name = n; }
      string get_name() { return name; }

      void set_balance(double bal);
      double get_balance();
      void deposit(double bal);
      void withdraw(double bal);
};

#endif