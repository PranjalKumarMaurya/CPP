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
       void setSetting(const string& key, const string& value) {
         settings[key] = value;
       }
       string getSetting(const string& key) {
         return settings[key];
       }
};

int main() {
    ConfigurationManager& config = config.createInstance();
    config.setSetting("key1", "value1");
    config.setSetting("key2", "value2");

    cout << config.getSetting("maurya") << endl;
    cout << config.getSetting("key1") << endl;
    cout << config.getSetting("key2") << endl;

  return 0;
}