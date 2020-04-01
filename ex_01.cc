#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;

    for (size_t i = 0; i <10; ++ i)
    {
        v.push_back(i);
        cout << v [i] << endl;
    }
    
    cout << "Erase elements from 3 to 7" << endl;
    
    /*vector< int >::iterator it = v.begin()+3;
    
    for (size_t i = 0; i <5; ++ i)
    {
        v.erase(it);
    }*/
    v.erase(v.begin()+3, v.begin()+8);
    
    for (size_t i = 0; i <v.end() -v.begin(); ++ i)
    {
        cout << v [i] << endl;
    }
    
    cout << "Erase the last element of the vector" << endl;
    v.erase(v.end()-1);
    
    for (size_t i = 0; i <v.size(); ++ i)
    {
        cout << v [i] << endl;
    }
    
    cout << "Adding 102 at the beginning" << endl;
    
    v.insert(v.begin(), 102);
    for (size_t i = 0; i <v.size(); ++ i)
    {
        cout << v [i] << endl;
    }
    
    cout << "Adding 110011 at the end" << endl;
    
    v.push_back(110011);
    for (size_t i = 0; i <v.size(); ++ i)
    {
        cout << v [i] << endl;
    }
}
