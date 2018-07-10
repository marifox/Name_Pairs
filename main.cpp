#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Name_pairs {
public:
    vector<string> name;
    vector<double> age;
    
  
    //inputing names
    void read_names()
    {
        string name_input;
        while(cin >> name_input) {
            if(name_input == "/") break;//exit on '/'
            name.push_back(name_input);
            
            
            
        }
    
    }
    //inputing age
    void read_ages()
    {
        double age_input;
        while(cin >> age_input) {
            if(age_input == '/') break;//exit on '/'
            age.push_back(age_input);
        }
        
    }
    /* void sort_pairs()
     { 
         int j = 0;
         for(int i = 0; i <= name.size(); i++) {
             
             j = i;
         }
         
       
     }*/
    
    //output of names
    void print() 
    {
        for(int i = 0; i <= name.size(); i++)
        {
            
                cout << name[i] << " " << age[i] << endl;
            }
            
    }
    
        
};

int main()
{
    Name_pairs Kuel;
	Kuel.read_names();
    Kuel.read_ages();
    //Kuel.sort_pairs();
    Kuel.print();
	return 0;
}
