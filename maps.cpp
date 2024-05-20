# include<iostream>
# include<unordered_map>
# include<map>


using namespace std;

int main() {

    //Creation MAP
    unordered_map<string, int> mapping;

    //CREATION PAIRS
    pair<string, int> p = make_pair("Abc", 22);

    pair<string, int> q("BCD", 23);

    pair<string, int> r;
    r.first = "ABB";
    r.second = 24;

    //INSERTION
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    mapping["Inu"] = 25;

    cout << "The size of the map is: " << mapping.size() << endl;

    //ACCESS
    cout << mapping.at("Abc") << endl;

    cout << mapping["ABB"] << endl;

    cout << mapping["Inu"] << endl;

    //count and find

    if(mapping.count("ab")) {
        cout << "Found" << endl;
    }

    else {
        cout << "Not Found" << endl;
    }

    if(mapping.find("Ishan") != mapping.end()) {
        cout << "Found" << endl;
    }

    else {
        cout << "Not Found" << endl;
    }

    //IMPORTANT
    cout << mapping["Ishan"] << endl;

    cout << mapping.size() << endl;
    
    return 0;
}