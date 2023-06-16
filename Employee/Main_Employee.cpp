#include "Employee.h"
#include <iostream>
#include "Main_Employee.h"

//Nhập các thông tin của Employee từ bàn phím 1 mảng N phần tử với số lượng 
//phần tử tương ứng với số Nhân viên nhập vào

void getInfor(Employee* ps,int N)
{
	
	string fullname, address, phone, position;
	float salary;
	
	for (int i = 0; i < N; i++)
	{
		int id = 1000+i;
		cout << "Name: ";
		cin.ignore();
		getline(cin, fullname);
		cout << "Address: ";
		getline(cin, address);
		cout << "Phone Number: ";
		cin >> phone;
		cin.ignore();
		cout << "Position: ";
		//cin >> position;
		getline(cin, position);
		cout << "Salary: ";
		cin >> salary;
		
		Employee p(id,fullname, address,position, phone,  salary);
		ps[i] = p;//Lưu đối tượng vào mảng
	}
}

void showInfo(Employee* ps,int N)
{
	for (int i = 0; i < N; i++)
	{
		ps[i].showInfor();
	}
}

void sortSalary(Employee* ps,int N)
{
	
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (ps[i].getSalary() < ps[j].getSalary())
			{
				Employee temp = ps[i];
				ps[i] = ps[j];
				ps[j] = temp;
			}
		}
	}

}

int main()
{
	Employee* people;
	int N;	
	//Employee** ps = new *Employee[N];
	cout << "Enter the number of Employee (N>0) : ";
	cin >> N;
	//con trỏ people thuộc kiểu Employee trỏ đến mảng Employee N phần tử
	//địa chỉ ô nhớ được cấp phát của mảng này sẽ được gán cho con trỏ
	people = new Employee[N];
	//Lấy thông tin nhập từ bàn phím
	getInfor(people,N);
	// hiển thị thông tin trước khi sắp xếp
	cout << "List of Employees before sorting:" << endl;
	showInfo(people, N);
	// sắp xếp danh sách theo mức lương giảm dần
	sortSalary(people, N);
	// hiển thị danh sách sau khi sắp xếp
	cout << "List of Employees after sorting:" << endl;
	showInfo(people, N);

	delete[] people;
	return 0;
	//comment update cho github
}