#include <iostream>
using namespace std;
double rerata(double c, double B)
{
	return (c + B) / 2;

}
string status(double f)
{
	if (f >= 70)
		return "LULUS";
	else
		return "GAGAL";
}
string status2(double r, double n)
{
	if (r >= 70 && n >= 80)
		return "LULUS";
	else
		return "GAGAL";
}
int main()
{
	double nilM, nilB;
	cout << "MASUKAN NILAI MATEMATIKA : ";
	cin >> nilM;
	cout << "MASUKAN NILAI BAHASA INGGRIS : ";
	cin >> nilB;

	cout << "STATUS KELULUSANNYA " << status(rerata(nilM, nilB)) << endl;
	cout << "STATUS KELULUSANNYA2 " << status2(rerata(nilM, nilB), nilM);

}
