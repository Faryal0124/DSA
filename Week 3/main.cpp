//#include<iostream>
//#include<conio.h>
//using namespace std;
//int fact(int n) {
//	if (n == 0)
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//int main() {
//	cout << fact(5) << endl;
//	_getch();
//	return 0;
//}
//----------EXAMPLE 3.2-------------------------
//#include<iostream>
//#include<conio.h>
//using namespace std;
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	_getch();
//	return 0;
//}
//-----------------EXAMPLE 3.3------------------
//#include<iostream>
//#include<math.h>
//using namespace std;
//int Power(int x, int N) {
//	if (N == 0)
//		return 1;
//	else
//		return Power(x, N - 1) * x;
//}
//int main() {
//	cout<<Power(5,2)<<endl;
//	return 0;
//}
//--------------------EXERCISE 3.1--------------------
//#include<iostream>
//#include<iomanip>
//#include<math.h>
//using namespace std;
//int Power(int x, int N) {
//	if (N == 0)
//		return 1;
//	else
//
//		return Power(x, N - 1) * x;
//}
//int main(){
//	int x = 2, N = 20;
//	cout << setw(10) << "Power" << setw(10) << "Exponet"<<endl;
//	for (int i = 0; i <= N; i++) {
//		cout << setw(10) << i << setw(10) << Power(x, i)<<endl;
//		
//	}
//	
//	return 0;

//}
//-------------------EXAMPLE 3.4----------------------
//#include<iostream>
//using namespace std;
//int Ackermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0)
//		return Ackermann(m - 1, 1);
//	else if (m > 0 && n > 0)
//		return Ackermann(m - 1, Ackermann(m, n - 1));
///--------------EXERCISE 3.2------------------------
//#include<iostream>
//using namespace std;
//int Ackermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0)
//		return Ackermann(m - 1, 1);
//	else if (m > 0 && n > 0)
//		return Ackermann(m - 1, Ackermann(m, n - 1));
//}
//
//int main() {
//	cout << Ackermann(3, 4) << endl;
//}
//-------------------EXERCISE 3.3 PART A--------------
//#include<iostream>
//using namespace std;
//void Print(int n){
//	if(n<0){
// return;
// cout<<n<<endl;
// print(n-1);
// return;
//		cout << i << endl;
//
//	}
//int main() {
//	int N = 10;
//	Print(N);
//	return 0;
//}
//----------------PART B----------------------------
//#include<iostream>
//#include<math.h>
//using namespace std;
//int Binomial(int n, int k) {
//	if (n == k)
//		return 1;
//	else if ( k == 0)
//		return  1;
//	else {
//		if (k > 0 && k > n && n > 1) {
//			return Binomial(n - 1, k - 1) + Binomial(n - 1, k);
//
//		}
//	}
//}
//int main() {
//	cout<< Binomial(3, 2);
//}
//-------------PART C-------------------------
//#include<iostream>
//using namespace std;
//int prime(int n, int div) {
//
//	if (n < 2) {
//		return false;
//	}
//	else if (div == n - 1) {
//		return true;
//	}
//	if (n % div == 0) {
//		return false;
//	}
//	else {
//		return prime(n, div + 1);
//	}
//}
//int main() {
//
//	int num;
//	char choice;
//
//	cout << "enetr a number ";
//	cin >> num;
//	if (prime(num, 2))
//		cout << " prime number." << endl;
//	else
//		cout << " not a prime number.";
//
//}
