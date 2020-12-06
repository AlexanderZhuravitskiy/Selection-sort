#include "Students.h"

using namespace std;

void Sorting::selectionSort(Student massiv[]) 
{
	for (int i = 0; i < number_of_students - 1; i++) 
	{
		int index_of_the_element_with_the_minimum_key_value = i;
		for (int j = i + 1; j < number_of_students; j++) 
		{
			if (massiv[j].average_mark < massiv[index_of_the_element_with_the_minimum_key_value].average_mark)
			{
				index_of_the_element_with_the_minimum_key_value = j;
			}
		}
		swap(massiv[i].name, massiv[index_of_the_element_with_the_minimum_key_value].name);
		swap(massiv[i].last_name, massiv[index_of_the_element_with_the_minimum_key_value].last_name);
		swap(massiv[i].day_of_birth, massiv[index_of_the_element_with_the_minimum_key_value].day_of_birth);
		swap(massiv[i].month_of_birth, massiv[index_of_the_element_with_the_minimum_key_value].month_of_birth);
		swap(massiv[i].year_of_birth, massiv[index_of_the_element_with_the_minimum_key_value].year_of_birth);
		swap(massiv[i].average_mark, massiv[index_of_the_element_with_the_minimum_key_value].average_mark);
	}
}

void Student::print_information_about_student(Student massiv[])
{
		cout << name << " " << last_name << "     ";
		cout << day_of_birth << "." << month_of_birth << "." << year_of_birth << "     ";
		cout << "average mark: " << average_mark << endl;
}