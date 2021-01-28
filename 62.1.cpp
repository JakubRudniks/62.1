#include<fstream>
#include<cstdlib>
#include<iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main()
{
int ilosc=0;
	double number, sum=0, max = INT_MIN, min = INT_MAX;
	ifstream read;
	ofstream write;
	
	read.open("liczby1.txt");
	if (read.fail())
	{
		cout<< "BLAD";
		exit(1);
	}

	write.open("wyniki.txt");
	if(write.fail())
	{
		cout << "BlAD";
		exit(1);
	}

	while (read>>number)
	{
		if (number>max)
		     max=number;
		
		if (number<min)
		     min=number;
               
                sum=sum+number;
                ilosc++;
	}

  
	
	write<<"W pliku znajduje sie "<<ilosc<<"liczb";
	write<<"Najwiêkszy numer to: "<<max<<endl<<oct;
	write<<"Najmniejszy numer to: "<<min<<endl;
	
	
	read.close();
	write.close();
	
	return 0;
}
