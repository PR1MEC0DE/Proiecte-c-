
#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	int base = 1;

	int temp = num;
	while (temp)
	{

		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 8;
	}
	return dec_value;
}

string decToHexa(int n)
{

	char hexaDeciNum[100];

	int i = 0;
	while(n != 0)
	{

		int temp = 0;

		temp = n % 16;

		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 87;
			i++;
		}
		n = n / 16;
	}

	string ans = "";

	for(int j = i - 1; j >= 0; j--)
	{
		ans += hexaDeciNum[j];
	}
	return ans;
}

int main()
{
	string hexnum;
	int decnum, octnum;

	cin>>octnum;

	decnum = octalToDecimal(octnum);

	hexnum = decToHexa(decnum);

	cout << "Valoarea hexazecimala este : "
		<< hexnum << endl;

}
//program care trasforma din octal in hexazecimal
//trebuie de adaugat cod pentru transformare hexazecimala in
// binara si apoi din binara in octala
