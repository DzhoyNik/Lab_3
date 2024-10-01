#include <iostream>
using namespace std;

int main() {
	double F, Ga;
	double d = 2.5;
	double g = 9.8;
	double Re = 4.1 * pow(10, 4);
	double v[]{ 0.01, 0.05, 0.1, 0.5, 1, 2 };

	for (size_t i = 0; i < size(v); i++)
	{
		Ga = (g * pow(d, 3)) / v[i];

		if (Ga < 4 * pow(10, 4)) {
			F = 0.183 * pow(Re, 0.74) * pow(Ga, -0.256);
		}
		else {
			F = 3.00 * pow(Re, 0.74) * pow(Ga, -0.52);
		}

		cout << F << " " << Ga << endl;
	}
}