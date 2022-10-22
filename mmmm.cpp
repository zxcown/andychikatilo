#include <iostream>
using namespace std;
int main() {
	//Series1◦
	/*double x,  sum = 0;
	int i = 1;
	while (i <= 10) {
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum ;*/
	//Series2
	/*int x, i , pro = 1;
	for (i = 1; i <= 10; i ++) {
		cin >> x;
		pro *= x;
	}
	cout << pro;*/
	//Series3
	/*double x, sum = 0;
	int i = 1;
	double aref = 0;
	while (i <= 10) {
		cin >> x;
		sum += x;
		aref = sum / 10;
		i++;
	}
	cout << aref;*/
	//Series4
	/*int i ;
	double n;
	double sum = 0, pro = 1;
	int x;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> x;
		sum += x;
		pro *= x;
	}
	cout << sum << " ";
	cout << pro << " ";*/
	//Series5
	int N;
	int i = 1, sum = 1;
	double n;
	cin >> N;
	while (i <= N) {
		cin >> n;
		sum +=  n;
		cout << n<< "  ";
		i++;
	}
	cout << sum ;
	//Series6
	//Series7
}
