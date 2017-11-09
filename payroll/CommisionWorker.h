#ifndef COMMISIONWORKER_H
#define COMMISIONWORKER_H
#include "employee.h"
class CommisionWorker : public Employee {
public:
	CommisionWorker(const string& first_name, const string& surname, float salary = 0.0f, float commision = 0.0f, int itemsSold = 0);
	~CommisionWorker();
	void changeBaseSalary(float salary);
	void changeItemsSold(int itemsSold);
	void changeCommision(float commision);
   virtual double earnings() const override;
   virtual void print() const;
private:
	float _salary;
	float _commision;
	int _itemsSold;
};

#endif // COMMISIONWORKER_H
