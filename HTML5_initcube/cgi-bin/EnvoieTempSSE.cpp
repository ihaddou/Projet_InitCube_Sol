#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int number = 0;
	cout << "Content-Type: text/event-stream\r\n\r\n";
	cout << "Cache-Control: no-cache\r\n\r\n";
	for (int i=0 ; i<10;i++)
	{
		//cout << "data:"<<number++<<"\r\n\r\n" <<endl;

		//Format JSON on envoie 2valeurs number et number+3
		cout<< "data:"<<"{\"temp\":"<<number++<<",\"charge\":"<<number+3<<"}""\r\n\r\n" <<endl;

				
		usleep(1000000);
	}
	return 0;
}
