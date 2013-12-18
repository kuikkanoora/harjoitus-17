/**********************************************************
*Teht‰v‰: Harjoitus17
*Tekij‰: Noora Kuikka
*PVM: 05.11.2013
*Kuvaus:
*Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
*k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
*N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
*m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
*k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.
*
*Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
*suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*
* Versio 1.0 H4719 05.11.2013
***********************************************************/

#include<iostream>
using namespace std;

struct PEOPLE
{
	char name[40];
	char surname[40];
	double journey;
	char address[100];
	char post[6];
	int size;
};

int main()
{

	PEOPLE students[4]={
		{"Harry", "Allen", 50, "Apple Street 3B","40200", 38},
		{"John", "Walker", 5, "Pear Street 23", "40100", 40}

	};
	
	

	cout << "\nEnter your first name:\n";
	cin >> students[2].name;
	
	cout << "\nEnter your surname:\n";
	cin >> students[2].surname;

	cout << "\nEnter your distance to school (km):\n";
	cin >> students[2].journey;

	cin.get ();

	cout << "\Enter your address:\n";
	cin.get (students[2].address, 100);

	cout << "\nEnter your postal code:\n";
	cin >> students[2].post;

	cout << "\nEnter your shoe size:\n";
	cin >> students[2].size;
	
	if (students[0].journey>students[1].journey)
	{
		students[3]=students[0];
		students[0]=students[1];
		students[1]=students[3];
	}
	if (students[0].journey>students[2].journey)
	{
		students[3]=students[0];
		students[0]=students[2];
		students[2]=students[3];
	}
	if (students[1].journey>students[2].journey)
	{
		students[3]=students[1];
		students[1]=students[2];
		students[2]=students[3];
	}

	cout << "\n\nThe students are listed below from shortest distance to school to highest: " <<endl;

	cout << "\nYour name is " << students[0].name << " " << students[0].surname << endl;
	cout << "\nYour address is " << students[0].address << ", post # " << students[0].post << endl;
	cout << "\nYour distance to school is " << students[0].journey << " km(s)" << endl;
	cout << "\nYour shoe size is " << students[0].size << endl;

	cout << "\n\n\nYour name is " << students[1].name << " " << students[1].surname << endl;
	cout << "\nYour address is " << students[1].address << ", post # " << students[1].post << endl;
	cout << "\nYour distance to school is " << students[1].journey << " km(s)" << endl;
	cout << "\nYour shoe size is " << students[1].size << endl;

	cout << "\n\n\nYour name is " << students[2].name << " " << students[2].surname << endl;
	cout << "\nYour address is " << students[2].address << ", post # " << students[2].post << endl;
	cout << "\nYour distance to school is " << students[2].journey << " km(s)" << endl;
	cout << "\nYour shoe size is " << students[2].size << endl;

}
  