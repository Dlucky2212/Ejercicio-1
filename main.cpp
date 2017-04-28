#include <iostream>

using namespace std;
//1 Transformar de millas a kilometros
float trans(int milla){
	float kilo;
	kilo = milla * 1.60934;
	return kilo;
}
int main()
{
    int a;
    cin >> a;
    cout << trans(a);
}
