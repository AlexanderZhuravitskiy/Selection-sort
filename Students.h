#pragma once

#include <string>
#include <iostream>

using namespace std;

const int number_of_students = 10;

class Student
{
public:
	string name;
	string last_name;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
	int average_mark;

	Student(string last_name, string name, int day_of_birth, int month_of_birth, int year_of_birth, int average_mark) {
		this->last_name = last_name;
		this->name = name;
		this->day_of_birth = day_of_birth;
		this->month_of_birth = month_of_birth;
		this->year_of_birth = year_of_birth;
		this->average_mark = average_mark;
	};

	Student()
	{
		last_name = " ";
		name = " ";
		day_of_birth = 0;
		month_of_birth = 0;
		year_of_birth = 0;
		average_mark = 0;
	}

	void print_information_about_student(Student* massiv);
};

class Sorting 
{
public:
	void selectionSort(Student* massiv);
};
	
