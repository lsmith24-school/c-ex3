#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

/* Lauren Smith  EX2 
the following program ask a user for his/her name and the number of text messages sent.
It then computes the cost for the text messages and print the following:
<---20---><-----10---><---10---><---10 --->
Name      # of texts   Cost/text  Total Cost

J.Doe             40          .10        4.00
*/
int main() 
{
//housekeeping: declare variables, a constant for cost per text and set output rules

	string name;
	int noTexts=0;
	double TEXT_COST = 0.100000;
	double totalCost;

	//input: ask user for name and number of text messages 
	cout << "what is your name? ";
	getline(cin, name);
	cout << "Enter number of texts ";
	//processing: compute cost by multiplying number of text by cost per text
	
	cin >> noTexts;
	totalCost = noTexts * TEXT_COST;
	//output: align data in columns, add a black line after the title, left justify name
	cout << "name " << setw(20)<< "# of texts" <<setw(10)<< "cost/text" <<setw(10) <<setw(10)<< "TotalCost" << endl;
	cout << endl;
	cout << fixed;
	cout << left <<name <<setw(20) <<right << noTexts <<setw(10)<< setprecision(2)<<TEXT_COST <<setw(10)<<setprecision(2)<<totalCost<< endl;

	cout << endl << "program ended successfully" << endl;
	system("pause");
}

