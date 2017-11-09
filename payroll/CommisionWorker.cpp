#include "CommisionWorker.h"

CommisionWorker::CommisionWorker(const string& first_name, const string& surname, float salary, float commision, int itemsSold):Employee(first_name,surname), _salary(salary), _commision(commision), _itemsSold(itemsSold)
{
}

CommisionWorker::~CommisionWorker()
{
}

double CommisionWorker::earnings() const
{
	return _salary + (_commision*_itemsSold);
}

void CommisionWorker::print() const
{
	cout<<"Commision Worker: "<<" ";
	Employee::print();
}

void CommisionWorker::changeBaseSalary(float salary)
{
	_salary = salary;
}

void CommisionWorker::changeItemsSold(int itemsSold)
{
	_itemsSold = itemsSold;
}

void CommisionWorker::changeCommision(float commision)
{
	_commision = commision;	
}	