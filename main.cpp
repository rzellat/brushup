#include <iostream> //inlude the iostream library

using namespace std; //we work in the standard ref for names

/*
Main function
*/
int main()
{
    cout << "Your name ?" << endl;
    string name_user("noname");
    //cin >> name_user;
    getline(cin,name_user); //pour recuperer tte la ligne tapee dans la console

    cout << "Your age ?" << endl;
    int age_user(0);
    cin >> age_user;

    cout << "Your name is " << name_user << " and your age is " << age_user << endl;

    if (age_user < 28)
    {
        cout << "You are under age" << endl;
    }
    else
    {
        cout << "You are old enough" << endl;
    }

    return 0;
}
