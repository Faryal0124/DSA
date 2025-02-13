
//--------------Example 1.2--------------------
/*#include<iostream>
#include<math.h>
using namespace std;

class complex {
private:
	float im;
	float re;
public:
	complex(float r, float i)
	{
		r = re;
		i = im;
	}
	complex(float r)
	{
		re = r; im = 0.0;
	}
	~complex() {};
	double Magnitude()
	{
		return sqrt(re * re + Imag() * Imag());
	}
	float Real() { return re; }
	float Imag() { return im; }
	complex operator+(complex b)
	{
		return complex(re + b.re, im + b.im);
	}
	complex operator=(complex b)
	{
		re = b.re; im = b.im; return *this;
	}
};

int main()
{
	complex a(1.0, 1.0);
	complex* b = new complex(5.0);
	complex c(0, 0);
	cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
	cout << "b real= " << b->Real() << " b imaginary = " << b->Imag() << endl;
	c = a + (*b);
	cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
	delete b;
	return 0;
}*/

	//---------------------------EXERCISE 1.1---------------------------------
    /*
#include <iostream>
using namespace std;
class Complex {
private:
	float re;
	float im;
public:
	Complex(float  real, float imagionary) : re(real), im(imagionary) {}
	Complex(): re(0.0) ,im(0.0) {



	}
	 friend ostream& operator<<(ostream &out, const Complex &c) {
		out << c.re << " + " << c.im << "i";
		return out;
	}

	Complex operator*(Complex &other) {
		Complex temp;
		temp.re = re * other.re - im * other.im;
		temp.im = re * other.im + im * other.re;
		return temp;

	}
};

	int main() {
	 Complex c1(3, 2);
	Complex c2(1, 7);
	Complex result = c1 * c2;
	cout<<result;

	}
*/



	//-------------------EXAMPLE 1.3-------------------------
/*#include<iostream>
using namespace std;
template <class T>
T GetMax(T a, T b) {
	T result;
	result = (a > b) ? a : b;
	return(result);
}
int main() {
	int i = 5, j = 8, k;
	long l = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMax<long>(l, m);
	cout << k << endl;
	cout << n << endl;
	return 0;
}*/
//---------------------EXAMPLE 1.4---------------------
/*#include<iostream>
using namespace std;
template <class T>
class mypair {
	T a, b;
public:
	mypair(T first, T second) {
		a = first;
		b = second;
	}
	T getmax();
};
template <class T>
T mypair<T>::getmax() {
	T retval;
	retval = a > b ? a : b;
	return retval;

}
int main() {
	mypair<int> myobject(100, 75);
	cout << myobject.getmax();
	return 0;
}*/
//------------------------EXERCISE 1.2-----------------------
/*#include<iostream>
using namespace std;
template <class T>
class mypair {
	T a, b;
public:
	mypair(T first, T second) {
		a = first;
		b = second;
	}
	T getmax();
	T getmin();

};
template <class T>
T mypair<T>::getmax() {
	T retval;
	retval = a > b ? a : b;
	return retval;

}
template <class T>
T mypair<T>::getmin() {
	T retval;
	retval = a < b ? a : b;
	return retval;
}
int main() {
	mypair<int> myobject(100, 75);
	cout << "Greater value: " << myobject.getmax() << endl;
	cout << "Smaller value: "<<myobject.getmin();
	return 0;
}*/
//---------------------------Example 1.5-----------------
/*#include<iostream>
using namespace std;
template<class T, int N>
class mysequence {
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
	T getmax();
	T gettmin();
};
//@brief: sets value to a particular index
//@prams: x defines the index at which we have to save the value
//prams: value is the volume that needs to be set at index x
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
	memblock[x] = value;
}
template<class T, int N>
T mysequence<T, N>::getmember(int x) {
	return memblock[x];
}

int main() {
	mysequence<int, 5> myints;
	mysequence <double, 5> myfloats;
	myints.setmember(0, 100);
	myfloats.setmember(3, 3.1234);
	cout << myints.getmember(0) << '\n';
	cout << myfloats.getmember(3) << '\n';
	return 0;
}*/
//-------------EXERCISE 1.4-------------------------
/*#include<iostream>
using namespace std;
template <class T, int N>
class mysequence {
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
	T getmax() {
		T max = memblock[0];
		for (int i = 0; i < N; i++) {
			if (memblock[i] > max) {
				max = memblock[i];
			}
			return max;
		}
		cout <<"Maximum: " << max << endl;
	}
	T getmin() {
		T min = memblock[0];
		for (int i = 0; i < N; i++) {
			if (memblock[i] < min) {
				min = memblock[i];
			}

		}return min;
		cout << "Minimum: " << min << endl;
	}
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
	memblock[x] = value;
}
template<class T, int N>
T mysequence<T, N>::getmember(int x) {
	return memblock[x];
}
int main() {
	mysequence<int, 3>myints;
	myints.setmember(0, 100);
	myints.setmember(1, 60);
	myints.setmember(2, 71);
	cout <<"Maximum: "<< myints.getmax()<<endl;
	cout << "Minimum: "<<myints.getmin()<<endl;
	return 0;

}*/

//-----------------EXERCISE 1.6------------------------
/*#include<iostream>
#include<fstream>
using namespace std;
int main(void) {
	ofstream outfile;
	outfile.open("practice.txt");
	ifstream infile("fin.txt");
	char ch;
	int charcount = 0;
	int wordcount = 0;
	int sentencecount = 0;
	bool inword = false;

	while (infile.get(ch)) {
		outfile << ch;
		charcount++;
	}
	if (isspace(ch) || ch == '.' || ch == '?' || ch == '!') {
		if (inword) {
			wordcount++;  // Increment word count when a word ends
			inword = false;
		}
	}
	else {
		inword = true;  // We are inside a word
	}

	// Count sentences
	if (ch == '.' || ch == '?' || ch == '!') {
		sentencecount++;
	}
}

// Handle the last word if file doesn't end with space or punctuation
if (inword) {
	wordcount++;
}
outfile << "Characters: " << charCount << endl;
outfile << "Words: " << wordCount << endl;
outfile << "Sentences: " << sentenceCount << endl;

infile.close();
outfile.close();*/

//------------EXERCISE 1.4-----------
/**#include <iostream>
#include <fstream>
#include <cctype>  // For isspace() and punctuation checks

using namespace std;

int main() {
	ifstream infile("fin.txt");  
	ofstream outfile("practice.txt");  

	char ch;
	int wordCount = 0, sentenceCount = 0, charCount = 0;
	bool inWord = false;

	while (infile.get(ch)) {  
		charCount++; 
		// Count words
		if (isspace(ch) || ch == '.' || ch == '?' || ch == '!') {
			if (inWord) {
				wordCount++;  
				inWord = false;
			}
		}
		else {
			inWord = true;  
		}

		// Count sentences
		if (ch == '.' || ch == '?' || ch == '!') {
			sentenceCount++;
		}
	}

	if (inWord) {
		wordCount++;
	}

	outfile << "Characters: " << charCount << endl;
	outfile << "Words: " << wordCount << endl;
	outfile << "Sentences: " << sentenceCount << endl;

	infile.close();
	outfile.close();

	return 0;
}*/
//---------------EXAMPLE 1.7-----------------
/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char name[10];
	float mt1, mt2, final, avg;
	ifstream fin;
	ofstream fout;
	fin.open("input.dat");
	fout.open("output.dat");
	while (!fin.eof()) {
		fin >> name >> mt1 >> mt2 >> final;
		avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
		fout << name << '\t' << avg << endl;
	}
	fin.close();
	fout.close();

}*/
//------------------EXERCISE 1.5-----------------------
/*#include <iostream>
#include <string>
using namespace std;

class House {
	string owner;
	string address;
	int bedrooms;
	float price;

public:
	void getdata() {
		cout << "Enter Owner: ";
		cin>> owner;
		cout << "Enter Address: ";
		cin >> address;
		cout << "Enter Number of Bedrooms: ";
		cin >> bedrooms;
		cout << "Enter Price: ";
		cin >> price;
	}

	void display() {
		cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
	}
};

int main() {
	House available[100];  
	int count = 0;
	char choice;

	do {
		available[count].getdata();
		count++;

		cout << "\nEnter another house? (Y/N): ";
		cin >> choice;
	} while ((choice == 'Y' || choice == 'y') && count < 100);

	cout << "\nOwner\tAddress\tBedrooms\tPrice" << endl;
	for (int i = 0; i < count; i++) {
		available[i].display();
	}

	return 0;
}*/
//--------------------EXERCISE 1.6-----------------
/*#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Student {
private:
	char name[30];
	int grades[10];
	float average;

public:
	void readData(ifstream& file, int numGrades) {
		file.getline(name, 30);

		int sum = 0;
		for (int i = 0; i < numGrades; i++) {
			file >> grades[i];
			sum += grades[i];
		}
		average = static_cast<float>(sum) / numGrades;
	}

	void display(int numGrades) const {
		cout << left << setw(15) << name;
		for (int i = 0; i < numGrades; i++) {
			cout << setw(5) << grades[i];
		}
		cout << setw(10) << fixed << setprecision(2) << average << endl;
	}

	float getAverage() const {
		return average;
	}

	string getName() const {
		return string(name);
	}
};

int main() {
	string filename;
	cout << "Enter the filename: ";
	cin >> filename;

	ifstream file(filename);
	if (!file) {
		cerr << "Error opening file!" << endl;
		return 1;
	}


	int numStudents, numGrades;
	if (!(file >> numStudents >> numGrades) || numStudents <= 0 || numGrades <= 0) {
		cerr << "Invalid input data!" << endl;
		return 1;
	}

	//  error handling
	if (numStudents > 10000) {
		cerr << "Too many students! Limit is 10,000." << endl;
		return 1;
	}


	Student* students = nullptr;
	try {
		students = new Student[numStudents];
	}
	catch (bad_alloc& e) {
		cerr << "Memory allocation failed: " << e.what() << endl;
		return 1;
	}

	for (int i = 0; i < numStudents; i++) {
		students[i].readData(file, numGrades);
	}

	file.close();


	cout << "\nStudent Grades:\n";
	cout << left << setw(15) << "Name";
	for (int i = 1; i <= numGrades; i++) {
		cout << setw(5) << "G" + to_string(i);
	}
	cout << setw(10) << "Average" << endl;
	cout << string(50, '-') << endl;

	for (int i = 0; i < numStudents; i++) {
		students[i].display(numGrades);
	}


	float classSum = 0, highest = students[0].getAverage(), lowest = students[0].getAverage();
	string highestName = students[0].getName(), lowestName = students[0].getName();

	for (int i = 0; i < numStudents; i++) {
		float avg = students[i].getAverage();
		classSum += avg;
		if (avg > highest) {
			highest = avg;
			highestName = students[i].getName();
		}
		if (avg < lowest) {
			lowest = avg;
			lowestName = students[i].getName();
		}
	}

	float classAverage = classSum / numStudents;

	cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
	cout << "Highest Average: " << highest << " (Student: " << highestName << ")\n";
	cout << "Lowest Average: " << lowest << " (Student: " << lowestName << ")\n";


	cout << "\nStudents below class average:\n";
	for (int i = 0; i < numStudents; i++) {
		if (students[i].getAverage() < classAverage) {
			cout << students[i].getName() << endl;
		}
	}


	delete[] students;

	return 0;
}*/
