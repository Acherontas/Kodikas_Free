#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{

     private:
    // Private attribute
    int salary;

  public:
        Employee();
        virtual ~Employee();
    // Setter
    void setSalary(int salary) {
      this->salary = salary;
    }
    // Getter
    int getSalary() {
      return this->salary;
    }
};

#endif // EMPLOYEE_H
