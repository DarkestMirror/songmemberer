#include<iostream> 
#include<string> 
#include<fstream>
#include <windows.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct Song
{
    string author = "Empty";
    string path = path + ".exe";
    string namesong = "Empty";

};
void Vstyplenie()
{

}
int main()
{
    ofstream l;
    setlocale(LC_ALL, "Russian");
    int a, j, action;
    string text, fortext;
    char search[255], answer[255], stranswer[255], str[15000], base[9] = { 0 };
    bool dialog = true;
    cout << "������� ���������� �����, ������� �� ������ �������." << endl;
    cin >> a;
    Song* song = new Song[a];
    cout << "������� ����� ��� ������������ ������� " << endl;
    cin >> j;
    do
    {
        cout << "�������, ��� �� ������ ������� � ��������� ������� ������ ��� �������� �����/������/������" << endl
            << "1)�������� ��� ������ �����" << endl
            << "2)�������� �������� �����" << endl
            << "3)�������� ����� ��� �����" << endl
            << "4)������� ��� �����" << endl
            << "5)�������� ��� ������" << endl
            << "6)�������� �������� �����" << endl
            << "7)�������� ����� �����" << endl
            << "8)�������� �������" << endl
            << "9)����������� ������" << endl
            << "10)����� ����� � �������" << endl
            << "11)����� ��� ����� ������" << endl;
        cin >> action;
        switch (action)
        {
        case 1:
            cin >> song[j].author;
            break;
        case 2:
            cin >> song[j].namesong;
            break;
        case 3:

            l.open(song[j].path,l.app);
            cin >> text;
            l << text;
            l.close();
            break;
        case 4:
            for (int i = 0; i < a; i++)
            {
                ifstream textread(song[i].path);
                textread.open(song[i].path);
                textread >> fortext;
                cout << song[i].author << "    " << song[i].namesong << endl
                    << fortext << endl;
                textread.close();
            }
            break;
        case 5:
            song[j].author = "Empty";
            break;
        case 6:
            song[j].namesong = "Empty";
            break;
        case 7:
            song[j].path = "Empty";
            break;
        case 8:
            system("cls");
            break;
        case 9:
            cin >> j;
            break;
        case 10:
            cout << "������� ����� "; 
            cin >> search;
            for (int i = 0; i < a; i++)
            {
               

                ifstream input(song[i].path);
                if (!input)
                {
                    cout << "������ ��� �������� �����.\n";
                }
                else
                {
                    char buffer[1024];
                    while (input.getline(buffer, 1024)) {
                        if (strstr(buffer, search))
                            cout << i << endl;
            }
            break;
        case 11:
            cout << "������� ����� ";
            cin >> search;
            
            for (int i = 0; i != a+1; i++)
            {
                if (search == song[i].author)
                {
                ifstream textread(song[i].path);
                textread.open(song[i].path);
                textread >> fortext;
                cout << song[i].author << "    " << song[i].namesong << endl
                << fortext << endl;
                textread.close();
                }
            }
            break;
        }
    } while (true);


}