#include <iostream>
#include <list>
using namespace std;

class Pokemon{
private: // access for this class only
    string Name;
    int Height;
    int Weight;
    int StatsTotal;
protected: // access for this class and its children only
    list<string> Types;
    list<string> Stages;

public: // access for anybody
    // constructors has no type
    // constructors has the same name of the class
    Pokemon(string name, list<string> stages, int weight, int height, list<string> types){
        Name = name;
        Stages = stages;
        Weight = weight;
        Height = height;
        Types = types;
    }

    // random method, is just like a regular function, but specific for the class
    void GetInfo(){
        cout << "Name: " << Name << ".\n";
        for(auto i: Stages){
            cout << i << ", ";
        }
        cout << "total of " << Stages.size() << " stages.\n";
        for(auto i: Types){
            cout << i << ", ";
        }
        cout << "total of " << Types.size() << " stages.\n";
        cout << "Weight: " << Weight << " kgs.\n";
        cout << "Height: " << Height << " cm.\n";
    }
};

int main(){
    Pokemon pikachu("Pikachu", {"Pichu", "Pikachu", "Raichu"}, 85, 52, {"Electric"});
    pikachu.GetInfo();

    return 0;
}