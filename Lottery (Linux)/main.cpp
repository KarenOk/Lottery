#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int generate (int* , int* , int*);

int main()
{
	int first, second, third ;
	int comp1 , comp2, comp3;
	char decision;


	 cout << "Hey User! \n " << endl;
	 usleep(2000000);
	 cout << "Play this game to stand a chance to win a million dollars! ;) \n" <<endl;
	 usleep(2000000);
	 cout << "Rules: \n You're to input 3 numbers between 1 - 40. \n" ;
	 cout << "The computer generates its own 3 numbers." << endl;
	 cout << "1. \t Win $1,000,000 if your 3 numbers match that of the computer. " <<endl;
	 cout << "2. \t Win $250,000 if 2 numbers match. " <<endl;
	 cout<< "3. \t Nothing if one or none match " <<endl;
	 usleep(4000000);
	 cout << "Shall we begin ? \n" << endl; 
	 usleep (2000000) ;
	 cout << "Y = Yes, N = No" << endl;
	 cin>> decision ;
	 if ( decision == 'Y' || decision == 'y')
		{
			cout << "Input 3 different numbers between 1 and 40 " << endl;

			cout << "First number? " ;
			cin >> first ;
			cout << endl;
			while(first <1 || first> 40 )
				{
					cout << "Invalid number, try again." << endl;
					cin >> first ;
				}

			cout << "Second number? ";
			cin >> second ;
			cout << endl;
			while(second <1 || second> 40 )
				{
					cout << "Invalid number, try again." << endl;
					cin >> second ;
				}

			cout<< "Third number? ";
			cin >> third ;
			cout << endl;
			while(third <1 || third> 40 )
				{
					cout << "Invalid number, try again." << endl;
					cin >> third ;
				}
			

			generate (&comp1, &comp2 , &comp3);

			cout<< "Computer's Numbers are: " << endl;
			cout << comp1 << "\n" << comp2 << "\n" << comp3 << endl;

			if ( (comp1==first||comp1==second||comp1==third) && (comp2==first||comp2==second||comp2==third) && (comp3==first||comp3==second||comp3==third) )
			{ 

				cout << " \n \n CONGRATULATIONS!!! " << endl;
			 usleep(2000000);
				cout << "You just won $1,000,000!!! " << endl;

			} else 
			 
				if ( ((comp1==first||comp1==second||comp1==third) && (comp2==first||comp2==second||comp2==third)) || ((comp2==first||comp2==second||comp2==third) && (comp3==first||comp3==second||comp3==third)) || ((comp1==first||comp1==second||comp1==third) && (comp3==first||comp3==second||comp3==third) ) )
			 {

				cout << " \n Congratulations, you win yourself $250,000 " << endl;

			 } else 
				
				{ cout << " \n Sorry one or no number matched. Better Luck Next Time. :( " << endl ; }
	 }
	 else 
	 {	
		cout<< "Toodles" << endl;
		return 0;
	 }

	return 0;

}

int generate (int *comp1, int *comp2, int *comp3) 
{	
	srand(time(0));
	int first = (rand() % 41) + 1;
	int second = (rand() % 41) + 1;
	int third = (rand() % 41) + 1;

	*comp1 = first ;
	*comp2 = second ;
	*comp3 = third ;

	return 0;
}