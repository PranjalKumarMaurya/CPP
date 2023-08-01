#include <iostream>
using namespace std;

int main() {
    int small_room, large_room;
    cout << "Hello, this is Maurya's cleaning service." << endl;
    cout << "Enter the number of rooms you wish to get cleaned : ";
    cout << "Enter the no. of small rooms : ";
    cin >> small_room;
    cout << "Enter the no. of large rooms : ";
    cin >> large_room;
    cout << "Price per small room is 25$" << endl;
    cout << "Price per large room is 35$" << endl;
    cout << "Small Rooms entered : " << small_room << endl;
    cout << "Large Rooms entered : " << large_room << endl;
    cout << "total cost : " << (small_room*25) + (large_room*35) << endl;
    cout << "tax : " << 0.06*((small_room*25)+(large_room*35)) << endl;
    cout << "total cost : " << (0.06*((small_room*25)+(large_room*35))) + ((small_room*25)+(large_room*35)) << endl;
}