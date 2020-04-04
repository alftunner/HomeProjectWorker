//
// Created by Alexis on 01.04.2020.
//

#include "human.h"
#include "Worker.h"
#include <vector>

class Supervisor : public Human {
private:
    vector<Worker> staff;
public:
    Supervisor(){}
    Supervisor(string name, char sex, int age, int experience)
    {
        setName(name);
        setSex(sex);
        setAge(age);
        setExperience(experience);
    }
    vector<Worker> getStaff()
    {
        return staff;
    }
    void initStaff(Worker worker)
    {
        staff.push_back(worker);
    }
    friend void showSupervisor(Supervisor& supervisor)
    {
        cout << "--------Supervisor " << supervisor.getName() << "----------" << endl;
        cout << "Sex: " << supervisor.getSex() << endl;
        cout << "Age: " << supervisor.getAge() << endl;
        cout << "Experience: " << supervisor.getExperience() << endl;
        cout << "-------In his staff: ---------" << endl;
        for(auto i : supervisor.getStaff())
        {
            cout << "--------Worker " << i.getName() << "----------" << endl;
            cout << "Sex: " << i.getSex() << endl;
            cout << "Age: " << i.getAge() << endl;
            cout << "Experience: " << i.getExperience() << endl;
        }
    }
};



