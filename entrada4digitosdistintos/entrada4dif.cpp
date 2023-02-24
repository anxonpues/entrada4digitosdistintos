#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

bool ent_es_ok(std::string);

int main()
{
	vector<int> vEnt;
	bool fl_ent = false;
	while (!fl_ent)
	{
		string entrada = "";
		bool ok = false;
		cout << "\n Enter a 4 different digits (can start with 0) ";
		cin >> entrada;
		ok = ent_es_ok(entrada);
		if (ok)
			fl_ent = true;
	}
}

bool ent_es_ok(std::string en)
{
	int v = 0;
	bool flag = true;
	vector<int> vdc;
	for (auto i=0; i < en.size(); i++)
	{
		vdc.push_back(en[i] - '0');
	}
	for (auto i = 0; i < vdc.size(); i++)
		for (auto j = i + 1; j < vdc.size(); j++)
			if (vdc[j] == vdc[i])
				flag = false;
	return flag;
}
