#include "funkcija.h"

void main()
{
	double a, b,eps;
	int n;
	double k,e;
	list<Polinom> polyList;
	string ulaz;
	getline(cin, ulaz);
	cout<<ulaz<<endl;


	polyList=ToPoly(deleteBlanks(ulaz));
	ispisPoly(polyList);



	cout << "Unesite interval:" << endl;
	cin >> a >> b;
	cout << "Unesite zeljenu tacnost:" << endl;
	cin >> eps;


	if (imaResenja(polyList, a, b))
	{
		cout << "Resenje metodom polovljenja: " << polovljenje(polyList, a, b, eps) << "    +- " << eps << endl;


	}
	else
	{
		cout << "Nema resenja!" << endl;
	}


	system("pause");
}