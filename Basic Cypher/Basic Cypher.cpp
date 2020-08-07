#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key{"ZXCVBNMLKJHGFDSAQWERTYUIOPqwertyuioplkjhgfdsazxcvbnm"};
	string input{};
	vector <int> v1{};
	
	cout << "Please enter your the text you want to encrypt: ";
	getline(cin, input);
	for (size_t i{ 0 }; i < input.length(); i++) {
		v1.push_back(alphabet.find(input.at(i)));
	}
	
	cout << "Encrypted message is: " << endl;
	cout << "---------------------------------------------" << endl;
	cout << " ";
	// for (auto vector1 : v1) cout << vector1 << " ";
	for (size_t i{ 0 }; i < v1.size(); i++)
	{
		if (v1.at(i) == -1)
			cout << " ";
		else 
			cout << key.at(v1.at(i));
	}
	cout << endl;
	cout << "\nDecrypted message is: " << endl;
	cout << "---------------------------------------------" << endl;
	cout << " ";

	for (size_t i{ 0 }; i < v1.size(); i++)
	{
		if (v1.at(i) == -1)
			cout << " ";
		else
			cout << alphabet.at(v1.at(i));
	}
	cout << endl;
}
