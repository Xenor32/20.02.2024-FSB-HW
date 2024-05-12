#include <iostream>
using namespace std;
template <typename T>
struct Address_fed {
    T index;
    string from;
};


template <typename T>
struct Letter {
    int id;
    T addres;
    
    void get_info() {
        cout << "index: " << addres.index << '\t' << "from: " << addres.from << endl;
    }
};

int main() {
    Address_fed add_fed = {123, "name fed"};
    Address_fed add_fsb = {"ssq123ff", "name fsb"};
    Letter let_1 = {1234, add_fed};
    Letter let_2 = {3434, add_fsb};
    
    let_1.get_info();
    let_2.get_info();

    return 0;
}
--------------------------------------------------------------
// #include <iostream>

// struct Address_fed {
//     int index;
//     std::string from;
// };

// struct Address_fsb {
//     std::string index;
//     std::string from;
// };

// template <typename T>
// struct Letter {
//     int id;
//     T addres;

//     void get_info() {
//         if(addres.from == "name fed")
//         {
//         std::cout  << "Гражданин: " << addres.from  << '\t' <<  "адресс: " << addres.index << std::endl;
//         }
//         else  std::cout  << "Сотрудник: " << addres.from  << '\t' <<  "место: " << addres.index << std::endl;
//     }
// };

// int main() {
//     Address_fed add_fed = {123, "name fed"};
//     Address_fsb add_fsb = {"ssq123ff", "name fsb"};
//     Letter let_1 = {1234, add_fed};
//     Letter let_2 = {3434, add_fsb};
    
//     let_1.get_info();
//     let_2.get_info();

//     return 0;
// }
// --------------------------------------------------------------
// #include <iostream>
// using namespace std;
// struct Creature
// {
//     string name;
//     int age;
//     string action;
// };
// void some_action(Creature& animal)
// {
//     cout << animal.action << endl;
// }
// int main()
// {
//     Creature dog("Finch", 12, "Bark!");
//     Creature bird("Birdy", 2, "Squak!");
//     some_action(dog);
//     some_action(bird);
// }
