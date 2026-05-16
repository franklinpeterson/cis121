#include <iostream>
#include <string>

using namespace std;

// base class
class Employee {
public:
    Employee();
    void FirstName(string fn);
    string FirstName();
    void LastName(string ln);
    string LastName();
    void Salary(float s);
    float Salary();
    float Bonus();
    ~Employee();

protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

Employee::Employee() {
    m_salary = 0.00f;
    m_bonus = 0.00f;
}

Employee::~Employee() {
    cout << "Goodbye" << endl;
}

void Employee::FirstName(string fn) { m_fn = fn; }
string Employee::FirstName() { return m_fn; }
void Employee::LastName(string ln) { m_ln = ln; }
string Employee::LastName() { return m_ln; }
void Employee::Salary(float s) { m_salary = s; }
float Employee::Salary() { return m_salary; }

float Employee::Bonus() {
    if (m_salary > 100000.00)
        m_bonus = m_salary * 0.20f;
    else
        m_bonus = m_salary * 0.10f;
    return m_bonus;
}

// derived class
class Manager : public Employee {
public:
    float Long_Term_Bonus() {
        return m_salary * 0.50f;
    }
    float Bonus() {
        m_bonus = m_salary * 0.50f;
        return m_bonus;
    }
};

// test program
int main() {
    Manager mgr;


    mgr.FirstName("Jane");
    mgr.LastName("Doe");
    mgr.Salary(120000.00f);

    // display results
    cout << "First Name: " << mgr.FirstName() << endl;
    cout << "Last Name: " << mgr.LastName() << endl;
    cout << "Annual Salary: $" << mgr.Salary() << endl;
    cout << "Standard Bonus (50%): $" << mgr.Bonus() << endl;
    cout << "Long Term Bonus (50%): $" << mgr.Long_Term_Bonus() << endl;

    return 0;
}