#ifndef SSDS_TYPES_H
#define SSDS_TYPES_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class ssds_types {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

#endif // SSDS_TYPES_H
