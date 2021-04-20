#include <iostream>

using namespace std;

int packet = 40;
int student = 14;

int studentPacket = packet / student;
int lecturerPacket = packet % student;

int main()
{
	cout << "Each student will get " << studentPacket << " packets of Haribo" << endl;

	cout << "The Lecturer will get " << lecturerPacket << " packets of Haribo" << endl;

	return 0;
}