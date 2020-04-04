#include <iostream>
#include "human.h"
#include "Worker.h"
#include "Supervisor.h"

using namespace std;

void showError(string msg);
void showSuccess(string msg);


int main() {
    Worker worker;
    worker.error = showError;
    worker.success = showSuccess;

    worker.setName("Balda");
    worker.setSex('M');
    try {
        worker.setAge(120);
    }
    catch(int e) {
        if (e == 0)
        {
            int age;
            cout << "Try input age one more: "; cin >> age;
            worker.setAge(age);
        }
    }
    try {
        worker.setExperience(120);
    }
    catch(int e) {
        if (e == 0)
        {
            int experience;
            cout << "Try input experience one more: "; cin >> experience;
            worker.setExperience(experience);
        }
    }
    showWorker(worker);

    Supervisor supervisor;
    supervisor.error = showError;
    supervisor.success = showSuccess;

    supervisor.setName("Pop");
    supervisor.setSex('M');
    try {
        supervisor.setAge(120);
    }
    catch(int e) {
        if (e == 0)
        {
            int age;
            cout << "Try input age one more: "; cin >> age;
            supervisor.setAge(age);
        }
    }
    try {
        supervisor.setExperience(120);
    }
    catch(int e) {
        if (e == 0)
        {
            int experience;
            cout << "Try input experience one more: "; cin >> experience;
            supervisor.setExperience(experience);
        }
    }

    supervisor.initStaff(worker);
    showSupervisor(supervisor);
}

void showError(string msg)
{
    cout << msg << endl;
}
void showSuccess(string msg)
{
    cout << msg << endl;
}