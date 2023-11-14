/*Name: Uche Hadassah
This program uses a function (Count) to check and output how many times an integer appeared in a user defined array
and calls the Count function in the IsMember function to check an output if the number appears at all*/
#include<iostream>
using namespace std;
const int MAX = 100;
//Function Prototypes
int Count(int[], int);
bool IsMember(int[], int);
int main()
{
	int array[MAX];
	int number;
	int i = 0;
	cout << "Enter the integers(-1 to end):";
		do
		{
			cin >> array[i];
			if (array[i] == -1)//Activates the sentinel
			{
				break;
			}
			i++;
		} while (array[i] != -1 && i < MAX);
		cout << "\nEnter the number you want to look for in the array:";
		cin >> number;
		cout <<"\n"<< number << " appeared " << Count(array, number) << " times in the array!";//calls the Count function
		if (IsMember(array, number))//calls the IsMember function
		{
			cout<<"\n"<< number << " appears in the array.";
		}
		else
		{
			cout<<"\n"<< number << " doesn't appear in the array.";
		}
}

int Count(int a1[], int num)
{
	int i = 0;//counter to increment through the loop
	int count = 0;//The counter to check how many times the number appears
	do
	{
		if (a1[i] == num)
		{
			count++;
        }
		i++;
	} while (a1[i] != -1);
	return count;//returns the number of times the number appears
}

bool IsMember(int s1[], int x)
{
	 return Count(s1, x) > 0;//Since the Count function already loops through the array, just return the function
}
