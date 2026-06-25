#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string fullName;
    string departmentName;
    double annualSalary;
    int yearsAsEmployee;
    int age;
};

void compute_increment(Employee &emp)
{
    double increment = 0;

    if(emp.age>=20 && emp.age<=30)
    {
        if(emp.yearsAsEmployee >=0 && emp.yearsAsEmployee <=2)
            increment = 10;
        else if(emp.yearsAsEmployee >2 && emp.yearsAsEmployee <=5)
            increment = 12;
    }
    else if(emp.age >30)
    {
        if(emp.yearsAsEmployee >=0 && emp.yearsAsEmployee <=3)
            increment = 14;
        else if(emp.yearsAsEmployee >3)
            increment = 15;
    }

    emp.annualSalary = emp.annualSalary +
                       (emp.annualSalary * increment / 100);
}

void print_employee_info(Employee emp)
{
    cout<<"\nName: "<<emp.fullName;
    cout<<"\nDepartment: "<<emp.departmentName;
    cout<<"\nMonthly Salary: "<<emp.annualSalary / 12<<endl;
}

int main()
{
    Employee emp;

    cout<<"Enter Full Name: ";
    getline(cin, emp.fullName);

    cout<<"Enter Department Name: ";
    getline(cin, emp.departmentName);

    cout<<"Enter Annual Salary: ";
    cin>>emp.annualSalary;

    cout<<"Enter Years as Employee: ";
    cin>>emp.yearsAsEmployee;

    cout<<"Enter Age: ";
    cin>>emp.age;

    cout<<"\n=====Employee Information Before Increment=====\n";
    print_employee_info(emp);

    compute_increment(emp);

    cout<<"\n=====Employee Information After Increment=====\n";
    print_employee_info(emp);

    return 0;
}








//#include <iostream>
//#include <string>
//using namespace std;
//
//	struct Employee
//	{
//	    string fullName;
//	    string departmentName;
//	    double annualSalary;
//	    int yearsAsEmployee;
//	    int age;
//	};
//	
//	void compute_increment(Employee &emp)
//	{
//	    double incrementPercent = 0;
//	
//	    if(emp.age >=20 && emp.age <=30)
//	    {
//	        if(emp.yearsAsEmployee >=0 && emp.yearsAsEmployee <=2)
//	            incrementPercent = 10;
//	        else if(emp.yearsAsEmployee >2 && emp.yearsAsEmployee <=5)
//	            incrementPercent = 12;
//	    }
//	    else if(emp.age >30)
//	    {
//	        if(emp.yearsAsEmployee >=0 && emp.yearsAsEmployee <=3)
//	            incrementPercent = 14;
//	        else if(emp.yearsAsEmployee >3)
//	            incrementPercent = 15;
//	    }
//	
//	    emp.annualSalary += emp.annualSalary * incrementPercent / 100;
//	}
//	
//	double total_increment(Employee emp[], int size)
//	{
//	    double totalIncrement = 0;
//	
//	    for(int i=0; i<size; i++)
//	    {
//	        double oldSalary = emp[i].annualSalary;
//	
//	        compute_increment(emp[i]);
//	
//	        double newSalary = emp[i].annualSalary;
//	        double incrementAmount = newSalary - oldSalary;
//	
//	        cout<<"\nEmployee "<< i + 1<<endl;
//	        cout<<"Salary Before Increment: "<<oldSalary<<endl;
//	        cout<<"Salary After Increment : "<<newSalary<<endl;
//	
//	        totalIncrement += incrementAmount;
//	    }
//	
//	    return totalIncrement;
//	}
//	
//	int main()
//	{
//	    int size;
//	
//	    cout<<"Enter Number of Employees;) ";
//	    cin>>size;
//	
//	    Employee employees[size];
//	
//	    cin.ignore();
//	
//	    for(int i =0; i<size; i++)
//	    {
//	        cout<<"\nEnter Details of Employee "<<i + 1<<endl;
//	
//	        cout<<"Full Name: ";
//	        getline(cin, employees[i].fullName);
//	
//	        cout<<"Department Name: ";
//	        getline(cin, employees[i].departmentName);
//	
//	        cout<<"Annual Salary: ";
//	        cin>>employees[i].annualSalary;
//	
//	        cout<<"Years as Employee: ";
//	        cin>>employees[i].yearsAsEmployee;
//	
//	        cout<<"Age: ";
//	        cin>>employees[i].age;
//	
//	        cin.ignore();
//	    }
//	
//	    double total = total_increment(employees, size);
//	
//	    cout<<"\nTotal Increment Approved: "
//	        <<total<<" PKR:"<<endl;
//	
//	    return 0;
//	}







//#include <iostream>
//using namespace std;
//
//	int* checkNumber(int *ptr)
//	{
//	    if(*ptr %2==0)
//	    {
//	        *ptr=*ptr +2;
//	    }
//	    else
//	    {
//	        *ptr=*ptr -2;
//	    }
//	
//	    return ptr;
//	 }
//	
//	int main()
//	{
//	    int num;
//	
//	    cout<<"Enter a number: ";
//	    cin>>num;
//	
//	    int *result = checkNumber(&num);
//	
//	    cout<<"Updated Value: "<<*result<<endl;
//	
//	    return 0;
//	}








//#include <iostream>
//using namespace std;
//
//	bool contains(int num1,int dig)
//	{
//	    while(num1>=dig)
//	    {
//	        if(num1%100==dig)
//	        {
//	            return true;
//	        }
//	
//	        num1 = num1/10;
//	    }
//	
//	    return false;
//	}
//	
//	int main()
//	{
//	    int num1,dig;
//	
//	    cout<<"Enter a large number: ";
//	    cin>>num1;
//	
//	    cout<<"Enter a double-digit number: ";
//	    cin>>dig;
//	
//	    if(contains(num1, dig))
//	    {
//	        cout<<"True"<<endl;
//	    }
//	    else
//	    {
//	        cout<<"False"<<endl;
//	    }
//	
//	    return 0;
//	}






//#include <iostream>
//using namespace std;
//
//	void sortMarks(int *arr,int size)
//	{
//	    for(int i=0; i<size-1; i++)
//	    {
//	        for(int j=0; j<size-i-1; j++)
//	        {
//	            if(*(arr+j) > *(arr+j+1))
//	            {
//	                int temp=*(arr+j);
//	                *(arr+j)=*(arr+j+1);
//	                *(arr+j+1)=temp;
//	            }
//	        }
//	    }
//	}
//	
//	int main()
//	{
//	    int marks[10] = {14,9,16,12,13,14,6,11,18,10};
//	
//	    cout<<"Marks Before Sorting:\n";
//	    for (int i=0; i<10; i++)
//	    {
//	        cout<<marks[i]<<" ";
//	    }
//	
//	    sortMarks(marks, 10);
//	
//	    cout<<"\n\nMarks After Sorting:\n";
//	    for (int i=0; i<10; i++)
//	    {
//	        cout<<marks[i]<<" ";
//	    }
//	
//	    cout<<endl;
//	
//	    return 0;
//	}
