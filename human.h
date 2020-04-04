//
// Created by Alexis on 01.04.2020.
//
#pragma once
#include <string>

using namespace std;

class Human {
private:
    string name;
    char sex;
    int age;
    int experience;
public:
    void (*error) (string message);
    void (*success) (string message);
    void setName(string name)
    {
        this->name = name;
    }
    void setSex(char sex)
    {
        this->sex = sex;
    }
    void setAge(int age)
    {
        if (age > 100 || age < 0)
        {
            error("Wrong age!");
            throw 0;
        }
        else {
            success("Right age!!! Congratulations");
            this->age = age;
        }
    }
    void setExperience(int experience)
    {
        if (experience > 100 || experience < 0)
        {
            error("Wrong experience!");
            throw 0;
        }
        else {
            success("Right experience!!! Congratulations");
            this->experience = experience;
        }
    }

    string getName()
    {
        return name;
    }
    char getSex()
    {
        return sex;
    }
    int getAge()
    {
        return age;
    }
    int getExperience()
    {
        return experience;
    }
};


