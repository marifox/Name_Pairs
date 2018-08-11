#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

using namespace std;

class Name_pairs {
public:
    vector<string> name;
    vector<double> age;

    int number_of_pairs = 0;
    //Name_pairs();//конструктор по умолчанию

    //inputing names
    void read_names()
    {
        string name_input;
        while(cin >> name_input) {
            if(name_input == "/") break;//exit on '/'
            name.push_back(name_input);
            ++number_of_pairs;

        }
        cin.clear();
        cin.ignore(1000, '\n');

    }
    //inputing age
    void read_ages()
    {
        double age_input;
        while(cin >> age_input) {
            if(age_input == '/') break;//exit on '/'

            age.push_back(age_input);

        }
        cin.clear();
        cin.ignore(1000, '\n');

    }
    int check_vector()
    {
        int sizeName = name.size();
        cout << sizeName;
        if(sizeName > 0 ) return sizeName;

    }

    //output of names
    void print()
    {
        int sizeName = name.size();
        for(int i = 0; i < sizeName; i++)
        {
                cout << name[i] << " "<< age[i] << endl;

            }
        cout.clear();

    }
    //insertion sort
    void sort_names()
    {
        string temp;
        double tempAge;
        int sizeName = name.size();
        for(int i = 1; i < sizeName; i++)
        {
            int j = i;//why
            while( j > 0 && name[j] > name[j-1])
            {
                temp = name[j];
                tempAge = age[j];
                name[j] = name[j-1];
                age[j] = age[j-1];
                name[j-1] = temp;
                age[j-1] = tempAge;
                j = j - 1;
            }
        }
    }

    friend bool operator==(Name_pairs NameAge1, Name_pairs NameAge2)
    {
        //prototype of overloading of ==
        int z = 0;
        if(NameAge1.number_of_pairs == NameAge2.number_of_pairs)
        {
            for(int i = 0; i < NameAge1.number_of_pairs; i++)
        {
            if((NameAge1.age[i] == NameAge2.age[i]) && (NameAge1.name[i] == NameAge2.name[i])) z+=1;
             else z--;
        }
        if(z == NameAge1.number_of_pairs) return true;
        else return false;
        }
        else return false;
    }
     friend bool operator!=(Name_pairs NameAge1, Name_pairs NameAge2)
    {
        //prototype of overloading of ==
        int z = 0;
        if(NameAge1.number_of_pairs == NameAge2.number_of_pairs)
        {
            for(int i = 0; i < NameAge1.number_of_pairs; i++)
        {
            if((NameAge1.age[i] == NameAge2.age[i]) && (NameAge1.name[i] == NameAge2.name[i])) z+=1;
             else z--;
        }
        if(z == NameAge1.number_of_pairs) return false;
        else return true;
        }
        else return true;
    }
};


int main()
{
    Name_pairs Kuel;
    Name_pairs Hi;
	Kuel.read_names();
    Kuel.read_ages();
    Hi.read_names();
    Hi.read_ages();
    Kuel.sort_names();
    if(Kuel != Hi) cout << "I am working "<<'\n';
    else cout << "Fuck"<<endl;
	return 0;
}
