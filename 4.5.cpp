// Ткачишин Юрій
// Лабораторна робота № 4.5
// "Попадання" в плоску фігуру
// Варіант 10

#include <iostream>
#include <iomanip>
#include <time.h>
#include < stdlib.h >

using namespace std;



int main()
{
	double R, a, b, x, y;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
			(y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x >= R && x <= a))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 2 * max(a, b, R) * rand() / RAND_MAX - max(a, b, R);
		y = 2 * max(a, b, R) * rand() / RAND_MAX - max(a, b, R);

		if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
			(y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x >= R && x <= a))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	return 0;
}
