#include <iostream>

using namespace std;

int main () {
	string nickname, yearLevel, school;
		cout << "Nickname: ";
		cin >> nickname;
		cout << "Course-Year Level: ";
		cin >> yearLevel;
		cout << "School: ";
		cin >> school;
		cout << " Wow Congrats " << nickname << "!" << yearLevel << " is a nice course. And you are studying in " << school << " which is one of the Center of Excellence in Tertiary Education";
		return 0;
}