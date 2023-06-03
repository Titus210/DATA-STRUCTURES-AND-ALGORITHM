#include <iostream>
using namespace std;

// create a class to hold task properties and methods and have a constructor that initializes the items in the task list. it should set items as private and getter and setter methods
class Task
{
private:
    string task_name;
    string task_description;
    string task_priority;
    string task_status;
    string task_due_date;
    Task *next;

public:

    Task(string task_name, string task_description, string task_priority, string task_status, string task_due_date)
    {
        this->task_name = task_name;
        this->task_description = task_description;
        this->task_priority = task_priority;
        this->task_status = task_status;
        this->task_due_date = task_due_date;
        this->next = nullptr;
    }

    string get_task_name()
    {
        return this->task_name;
    }

    string get_task_description()
    {
        return this->task_description;
    }

    string get_task_priority()
    {
        return this->task_priority;
    }

    string get_task_status()
    {
        return this->task_status;
    }

    string get_task_due_date()
    {
        return this->task_due_date;
    }

    Task *get_next()
    {
        return this->next;
    }

    void set_task_name(string task_name)
    {
        this->task_name = task_name;
    }

    void set_task_description(string task_description)
    {
        this->task_description = task_description;
    }

    void set_task_priority(string task_priority)
    {
        this->task_priority = task_priority;
    }

    void set_task_status(string task_status)
    {
        this->task_status = task_status;
    }

    void set_task_due_date(string task_due_date)
    {
        this->task_due_date = task_due_date;
    }

    void set_next(Task *next)
    {
        this->next = next;
    }
};

// create a class to hold the task list and have a constructor that initializes the head to null and have a method to add a task to the list
class TaskList
{
private:
    Task *head;

public:
    TaskList()
    {
        this->head = nullptr;
    }

    void add_task(Task *new_task)
    {
        if (this->head == nullptr)
        {
            this->head = new_task;
        }
        else
        {
            Task *temp = this->head;
            while (temp->get_next() != nullptr)
            {
                temp = temp->get_next();
            }
            temp->set_next(new_task);
        }
    }

    void display_task_list()
    {
        if (this->head == nullptr)
        {
            cout << "Task list is empty!" << endl;
        }
        else
        {
            Task *temp = this->head;
            while (temp != nullptr)
            {
               cout << "Task Name: " << temp->get_task_name() << endl;
                cout << "Task Description: " << temp->get_task_description() << endl;
                cout << "Task Priority: " << temp->get_task_priority() << endl;
                cout << "Task Status: " << temp->get_task_status() << endl;
                cout << "Task Due Date: " << temp->get_task_due_date() << endl;
                cout << endl;
                temp = temp->get_next();
            }
        }
    }

    // function to delete node 
    void delete_task(string task_name)
    {
        Task *temp = this->head;
        Task *prev = nullptr;
        if (temp != nullptr && temp->get_task_name() == task_name)
        {
            this->head = temp->get_next();
            delete temp;
            return;
        }
        while (temp != nullptr && temp->get_task_name() != task_name)
        {
            prev = temp;
            temp = temp->get_next();
        }
        if (temp == nullptr)
        {
            return;
        }
        prev->set_next(temp->get_next());
        delete temp;
    }

};

int main()
{
    TaskList *task_list = new TaskList();
    Task *task1 = new Task("Task 1", "Task 1 Description", "High", "In Progress", "12/12/2020");
    Task *task2 = new Task("Task 2", "Task 2 Description", "Medium", "In Progress", "12/12/2020");
    Task *task3 = new Task("Task 3", "Task 3 Description", "Low", "In Progress", "12/12/2020");
    task_list->add_task(task1);
    task_list->add_task(task2);
    task_list->add_task(task3);
    task_list->display_task_list();
    // delete task
    task_list->delete_task("Task 2");
    task_list->display_task_list();
    return 0;
}