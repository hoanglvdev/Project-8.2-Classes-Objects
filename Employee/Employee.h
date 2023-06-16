#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	int eid;
	string fullname;
	string address;
	string position;
	string phone;
	float salary;
public:
	//Khai bao bien id la bien tinh
	static int id;

	//khoi tao Structor
	Employee();
	//Khởi tạo giá trị ban đầu 
	Employee(int,string,string,string,string,float);
	void setId(int);
	void setFullname(string);
	void setAddress(string);
	void setPosition(string);
	void setPhone(string);
	void setSalary(float);

	int getId();
	string getFullname();
	string getAddress();
	string getPosition();
	string getPhone();
	float getSalary();

	//Hàm tăng lương cho Employee
	void raiseSalary(float);
	//Hàm showInfo của Employee
	void showInfor();
};

