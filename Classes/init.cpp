#include <iostream>
using namespace std;



class Player {
    public :
    string name;
    double health;
    int xp;

    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool_is_dead();
}; 

class Account {
    public :
    string name;
    double balance{10000};

    void deposit(double bal) { balance += bal; cout << "Deposited. Your balance now is : " << balance << endl; }
    void withdraw(double bal) { balance -= bal; cout << "Withdrawn. Your balance now is : " << balance << endl; }
};

void details_of_player(Player);
void details_of_player(Player);

int main() {
    Player player1;
    player1.name = "Pranjal";
    player1.health = 100;
    player1.xp = 10;
    player1.talk("hi");

    Player *player2{nullptr};
    player2 = new Player;
    (*player2).name = "Kashvi";
    (*player2).health = 99.1;
    (*player2).xp = 10;

    Account person1;
    person1.name = "Pranjal";
    person1.balance = 10000;
    person1.deposit(30000);

    details_of_player(player1);
    details_of_player(*player2);

    return 0;
}

void details_of_player(Player player) {
    //cout << player << " info : " << endl;
    cout << "Name : " << player.name << endl;
    cout << "Health : " << player.health << endl;
    cout << "Name :" << player.xp << endl;
    cout << "------------------" << endl;
}
void details_of_player(Player *player) {
    //cout << player << " info : " << endl;
    cout << "Name : " << (*player).name << endl;
    cout << "Health : " << (*player).health << endl;
    cout << "Name :" << (*player).xp << endl;
    cout << "------------------" << endl;
}