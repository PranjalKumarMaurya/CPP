#include <iostream>
#include <vector>
using namespace std;

int main() {
    char choice {};
    vector<double> vec {};

    do {
    cout << "Enter your choice\n\n"
         << "P - Print numbers\n"
         << "A - Add a number\n"
         << "M - Display mean of numbers\n"
         << "S - Display the smallest number\n"
         << "L - Display the largest number\n"
         << "Q - Quit" << endl;

    cin >> choice;

    
    double num {0};
    double mean {0};
    int smallest {0};
    int largest {0};

    switch (choice) {
        case 'P':
        case 'p':
            if(vec.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for(auto val: vec)
                    cout << val << " ";
                cout << "]" << endl;
            }
            break;
        case 'A':
        case 'a':
            cout << "Enter an integer to add to the list: ";
            cin >> num;
            vec.push_back(num);
            break;
        case 'M':
        case 'm':
            if(vec.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                for(auto val: vec)
                    mean += val;
                mean /= vec.size();
                cout << "The mean is " << mean << endl;
            }
            break;
        case 'S':
        case 's':
            if(vec.size() == 0)
                cout << "Unable to determine the smallest number - list is empty" << endl;
            else {
                smallest = vec.at(0);
                for(auto val: vec)
                    if(val < smallest)
                        smallest = val;
                cout << "The smallest number is " << smallest << endl;
            }
            break;
        case 'L':
        case 'l':
            if(vec.size() == 0)
                cout << "Unable to determine the largest number - list is empty" << endl;
            else {
                largest = vec.at(0);
                for(auto val: vec)
                    if(val > largest)
                        largest = val;
                cout << "The largest number is " << largest << endl;
            }
            break;
        case 'Q':
        case 'q':
            cout << "Goodbye" << endl;
            break;
        case 'g':
            cout<<vec.size()<<endl;
            break;
        default: 
            cout << "Unknown selection, please try again" << endl;        
    }
    } while(choice != 'q' && choice != 'Q');
    
}