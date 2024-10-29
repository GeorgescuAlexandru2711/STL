#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    ifstream inFile("input.txt");

    int no_problems, no_doctors, no_accept;
    string name, problem_speciality, doctor_speciality;
    inFile >> no_problems;
    vector<string>id_probleme(no_problems);
    vector<string>specializare_problema(no_problems);

    for (int i=0;i<no_problems;i++)
    {
        inFile >> id_probleme[i];
        inFile >> specializare_problema[i];
    }

    inFile >> no_doctors;

    vector<string>id_doctor(no_doctors);
    vector<string>specializare_doctor(no_doctors);
    for (int i=0;i<no_doctors;i++)
    {
        inFile >> id_doctor[i];
        inFile >> specializare_problema[i];
    }

    for (int i = 0; i < no_problems; i++) {
        for (int j = 0; j < no_doctors; j++) {
            if (specializare_problema[i] == specializare_doctor[j]) {
                cout << specializare_problema[i] << " " << "Acceptat";
                cout << endl;
            }
        }
    }
    
    return 0;
}