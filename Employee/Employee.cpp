#include "Employee.h"
#include <iostream>
//Khởi tạo giá trị mặc định ban đầu cho các thuộc tính
Employee::Employee()
{
	this->id = 0;
	this->fullname = "";
	this->address = "";
	this->position = "";
	this->phone = "";
	this->salary = 0;
}
int Employee::id = 1000;
Employee::Employee(int id, string fullname, string address, string positon, string phone, float salary)
{
	setId(id);
	setFullname(fullname);
	setAddress(address);
	setPosition(positon);
	setPhone(phone);
	setSalary(salary);
}


void Employee::setId(int id)
{
	this->eid = (id >= 1000) ? id : Employee::id++;
}
void Employee::setFullname(string fullname)
{
	this->fullname = fullname;
}
void Employee::setAddress(string address)
{
	this->address = address;
}
void Employee::setPosition(string position)
{
	this->position = position;
}
void Employee::setPhone(string phone)
{
	this->phone = phone;
}
void Employee::setSalary(float salary)
{
	this->salary = salary;
}

int Employee::getId()
{
	return eid;
}
string Employee::getFullname()
{
	return fullname;
} 
string Employee::getAddress()
{
	return address;
}
string Employee::getPosition()
{
	return position;
}
string Employee::getPhone()
{
	return phone;
}
float Employee::getSalary()
{
	return salary;
}
void Employee::raiseSalary(float amout)
{
	salary += amout;
}
//Hàm showInfo của Employee
void Employee::showInfor()
{
cout << "===============================================\n";
cout << "ID: " << Employee::getId() << endl;
cout << "Name: " << Employee::getFullname() << endl;
cout<< "Address: " << Employee::getAddress() << endl;
cout<< "Position: " << Employee::getPosition() << endl;
cout<< "Phone: " << Employee::getPhone() << endl;
cout<< "Salary: " << Employee::getSalary() << endl;
cout << "===============================================\n";
}