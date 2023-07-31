#include <iostream>
using namespace std;

class Singleton {
    public: 
        static Singleton* createInstance() {
            if(instance==nullptr) {
                instance = new Singleton();
            }
            return instance;
        }
        static void destroyInstance() {
            if(instance!=nullptr) {
                delete instance;
                instance = nullptr;
            }
        }
    private: 
        Singleton() {
            cout << "Created \n";
        }
        ~Singleton() {
            cout << "Destroyed \n";
        }
        static Singleton* instance;    
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::createInstance();
    Singleton* s2 = Singleton::createInstance();
    Singleton::destroyInstance();
    Singleton::destroyInstance();
    return 0;
}