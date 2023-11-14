/*a) Write a function called Count that takes as parameters an integer array a1, and 
integer num, and returns the number of times num appears in the array a. You should 
assume that there is a -1 at the end of the array. 
b) Use your function Count above (i.e. call it) to write a function called IsMember
that takes as parameters an integer array s1 (assumed to be terminated by -1) and an 
integer x and returns true (i.e. 1) if x appears anywhere in the array. 
Write a main program to test the function Count using a user defined array.*/
#include<iostream>
using namespace std;
const int MAX = 100;
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
			if (array[i] == -1)
			{
				break;
			}
			i++;
		} while (array[i] != -1 && i < MAX);
		cout << "\nEnter the number you want to look for in the array:";
		cin >> number;
		cout <<"\n"<< number << " appeared " << Count(array, number) << " times in the array!";
		if (IsMember(array, number))
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
	int i = 0;
	int count = 0;
	do
	{
		if (a1[i] == num)
		{
			count++;
        }
		i++;
	} while (a1[i] != -1);
	return count;
}

bool IsMember(int s1[], int x)
{
	int j = 0;
	do
	{
		if (Count(s1, x))
		{
			return true;
		}
	} while (s1[j] != -1);
	return false;
}
