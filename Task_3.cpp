#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    ofstream fout("Task_3.txt");
    fout << "Hello, word!";
    fout.close();

    ifstream fin("Task_3.txt");
    string x;

    getline(fin, x);
    cout << x << endl;
    fin.close();

}