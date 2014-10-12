#include <iostream> //inlude the iostream library

using namespace std; //we work in the standard ref for names

/*
Function to compute an average
*/
double moyenne(double table[], int taille_tableau)
{
    double moyenne(0);
    for(int i(0); i<taille_tableau;i++)
    {
        moyenne += table[i];
    }
    moyenne = moyenne/taille_tableau;
    return moyenne;
}


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

    int taille_table(2);
    double notes[taille_table];
    notes[0]=10;
    notes[1]=12;
    double ma_moyenne(0);
    ma_moyenne = moyenne(notes,taille_table);
    cout << ma_moyenne << endl;

    return 0;
}
