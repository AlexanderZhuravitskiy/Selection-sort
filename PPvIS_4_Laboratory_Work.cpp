#include "Students.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Student massiv[number_of_students]
	{
		Student("Пупкин", "Вася", 11, 12, 2000, 6),
		Student("Иванов", "Иван", 6, 10, 2001, 8),
		Student("Сергеев", "Кирилл", 2, 8, 1999, 3),
		Student("Александрова", "Ирина", 25, 1, 2000, 10),
		Student("Иванова", "Мария", 15, 10, 2000, 7),
		Student("Петров", "Сергей", 19, 8, 1999, 4),
		Student("Сидоров", "Илья", 22, 5, 1999, 1),
		Student("Кузнецова", "Александра", 17, 4, 2000, 9),
		Student("Ильяшик", "Екатерина", 4, 5, 2000, 2),
		Student("Владимиров", "Антон", 29, 9, 1999, 5),
	};

	for (int i = 0; i < number_of_students; i++)
	{
		massiv[i].print_information_about_student(massiv);
	}
	cout << endl << endl;

	Sorting example;

	example.selectionSort(massiv);

	for (int i = 0; i < number_of_students; i++)
	{
		massiv[i].print_information_about_student(massiv);
	}
	cout << endl << endl;

	return 0;
}