#include <iostream>
#include <map>
using namespace std;

class ConfigurationManager {
    private: 
       map<string, string> settings;
        ConfigurationManager() {
          settings["maurya"]="pranjal";
        }
       ~ConfigurationManager() {
        cout<<"destroyed";
       };
    public: 
       static ConfigurationManager& createInstance() {
            static ConfigurationManager inst;
            return inst;
       }
       void setSetting(string key, string value) {
         settings[key] = value;
       }
       string getSetting(string key) {
         return settings[key];
       }
};

int main() {
    ConfigurationManager& config1 = ConfigurationManager::createInstance();
    ConfigurationManager& config2 = ConfigurationManager::createInstance();
    string name1, name2;
    cout << "Enter name 1 : ";
    cin >> name1;
    cout << "Enter name 2 : ";
    cin >> name2;
    config1.setSetting("key1", name1);
    config2.setSetting("key2", name2);

    cout << config1.getSetting("maurya") << endl;
    cout << config1.getSetting("key1") << endl;
    cout << &config1<< endl;
    cout << &config2 << endl;
    cout << config2.getSetting("key2") << endl;

  return 0;
}