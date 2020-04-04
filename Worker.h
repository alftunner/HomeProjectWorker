//
// Created by Alexis on 01.04.2020.
//
#pragma once
#include "human.h"

class Worker : public Human {
public:
    Worker(){};
    Worker(string name, char sex, int age, int experience)
    {
        setName(name);
        setSex(sex);
        setAge(age);
        setExperience(experience);
    }
    friend void showWorker(Worker& worker)
    {
        cout << "--------Worker " << worker.getName() << "----------" << endl;
        cout << "Sex: " << worker.getSex() << endl;
        cout << "Age: " << worker.getAge() << endl;
        cout << "Experience: " << worker.getExperience() << endl;
    }
};


