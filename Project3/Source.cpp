#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	int a;
	int b;
	double c=1;
	cout << "¬ведите основание степени" << endl; cin >> a;
	cout << "¬ведите показатель степени" << endl; cin >> b;
	if (b > 0) 
	{
		for (int i = 1; i <= b; i++)
		{
			c *= a;
		}
		cout << a << " в степени " << b << " = " << c << endl;
	}
	else if (b < 0)
	{
		for (int i = -1; i >= b; i--)
		{
			c *= a;
		}
		cout << a << " в степени " << b << " = " << 1/c << endl;
	}
	else
	{
		cout << a << " в степении " << b << " = " << 1 << endl;
	}
#endif
#ifdef TASK_2
	for (int i = 0; i < 255; i++)
	{
		cout << i << " " << char(i) << "\t";
		if ((i + 1) % 16 == 0)
		{
			cout << endl;
		}
	}
#endif
#ifdef TASK_3
	float a = 0;
	float b = 0;
	float c = 1;
	float f;
	cout << a << " " << b << " " << c << " ";
	for (int i = 1; i <= 100; i++)
	{
		f = c + b;
		a = b;
		b = c;
		c = f;
		cout << f << " ";
	}

#endif 
#ifdef TASK_4
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i+1 << "*" << j+1 << "=" << (i+1)*(j+1) << endl;
		}
	}
#endif 
#ifdef TASK_5
	int n = 9;
	cout << " " << "\t";
	for (int j = 2; j <= n; j++)
	{
		cout << j << "\t";
	}
	cout << endl;
	for (int i = 2; i <= n; i++)
	{
		cout << i << "\t";
		for (int j = 2; j <= n; j++)
		{
			cout << j * i << "\t";
		}
		cout << endl;
	}
#endif
#ifdef TASK_6
	int n;
	int  h=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				h += 1;
			}
		}
		if (h == 1)
		{
			cout << i << "\t";
		}
		h = 0;
	}
#endif
}