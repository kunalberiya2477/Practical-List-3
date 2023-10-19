#include <iostream>
using namespace std;
class employee
{
 private:
	string e_name, branch;
	long int e_code;
	float e_salary;
	public:
 	void get_data();
 	void put_data();
};
void employee::get_data()
	{
		cout<<"Enter Employee name::";
		cin>>e_name;
		cout<<"Enter Employee code::";
		cin>>e_code;
		cout<<"enter Employee salary::";
		cin>>e_salary;
		cout<<"Enter Employee branch::";
		cin>>branch;
	}
void employee::put_data()
	{
		cout<<"Employee name is::"<<e_name<<endl;
		cout<<"Employee code is::"<<e_code<<endl;
		cout<<"Employee salary is::"<<e_salary<<endl;
		cout<<"Employee branch is::"<<branch<<endl;
	}
int main()
{
	employee e1;
	e1.get_data();
	e1.put_data();
	
	return 0;
}