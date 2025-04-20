#include <iostream>
#include <cmath>
using namespace std;

float diskriminan(float, float, float);
float akar1(float, float, float);
float akar2(float, float, float);

int main()
{
	int a, b, c, dis;
	cout << "Masukkan konstanta dari persamaan kuadrat \na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "Persamaan kaudrat anda adalah " << a << "x^2 + " << b << "x + " << c << " = 0" << endl << endl;

	dis = diskriminan(a, b, c);

	if (dis == 0)
	{
		cout << "Diskriminan=0, persamaan kuadrat ini hanya memiliki satu akar berupa bilangan real" << endl << endl;
		cout << "Akar persamaan kuadrat ini adalah " << akar1(a, b, dis) << endl;
	}
	if (dis > 0)
	{
		cout << "Diskriminan>0, maka persamaan kuadrat ini memiliki dua akar persamaan kuadrat berupa bilangan real" << endl << endl;
		cout << "Akar-akar persamaan kuadrat ini adalah " << akar1(a, b, dis) << " dan " << akar2(a, b, dis) << endl;
	}
	if (dis < 0)
	{
		cout << "Diskriminan<0, maka persamaan kuadrat tersebut tidak dapat dihitung dengan program ini" << endl << endl;
	}

	system("pause");
	return 0;
}

float diskriminan(float a, float b, float c)
{
	return ((b*b) - (4 * a*c));
}
float akar1(float a, float b, float d)
{
	float result;
	result = ((b*(-1) + sqrt(d)) / (2 * a));
	return result;
}
float akar2(float a, float b, float d)
{
	float result;
	result = ((b*(-1) - sqrt(d)) / (2 * a));
	return result;
}