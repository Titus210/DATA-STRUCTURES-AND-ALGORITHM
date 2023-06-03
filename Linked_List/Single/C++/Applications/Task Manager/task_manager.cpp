#include <iostream>
using namespace std;

class Task
{
private:
    string task_name;
    string task_description;
    int task_priority;
    string task_status;
    string task_due_date;
    Task *next;

public:
    Task(string task_name, string task_description, int task_priority, string task_status, string task_due_date)
    {
        this->task_name = task_name;
        this->task_description = task_description;
        this->task_priority = task_priority;
        this->task_status = task_status;
        this->task_due_date = task_due_date;
        this->next = nullptr;
    }

    // Setters to set the values of the variables
    void set_task_name(string task_name)
    {
        this->task_name = task_name;
    }
    void set_task_description(string task_description)
    {
        this->task_description = task_description;
    }
    void set_task_priority(int task_priority)
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

    // Getters to get data
    string get_task_name()
    {
        return this->task_name;
    }
    string get_task_description()
    {
        return this->task_description;
    }
    int get_task_priority()
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
};

void add_task(Task **head)
{
    string task_name, task_description, task_status, task_due_date;
    int task_priority;
    cout << "Enter task data: " << endl;
    cout << "Task Name: ";
    cin.ignore(); // Ignore the newline character from the previous input
    getline(cin, task_name);
    cout << "Task Description: ";
    getline(cin, task_description);
    cout << "Task Priority: ";
    cin >> task_priority;
    cout << "Task Status: ";
    cin.ignore(); // Ignore the newline character from the previous input
    getline(cin, task_status);
    cout << "Task Due Date: ";
    getline(cin, task_due_date);
    cout << endl;

    Task *new_task = new Task(task_name, task_description, task_priority, task_status, task_due_date);

    if (*head == nullptr)
    {
        *head = new_task;
    }
    else
    {
        Task *temp = *head;
        while (temp->get_next() != nullptr)
        {
            temp = temp->get_next();
        }
        temp->set_next(new_task);
    }
}
void change_status(Task **head)
{
    string new_status, task_name;
    cout << "Enter the name of the task to change its status: ";
    cin.ignore(); // Ignore the newline character from the previous input
    getline(cin, task_name);

    Task *temp = *head;
    while (temp != nullptr)
    {
        if (temp->get_task_name() == task_name)
        {
            bool valid_status = false;
            do
            {
                cout << "Enter the new status (HIGH, LOW, or MEDIUM): ";
                cin >> new_status;

                if (new_status == "HIGH" || new_status == "LOW" || new_status == "MEDIUM")
                {
                    valid_status = true;
                }
                else
                {
                    cout << "Invalid status entered. Please try again." << endl;
                }
            } while (!valid_status);

            if (temp->get_task_status() == new_status)
            {
                cout << "Status is already " << new_status << endl;
            }
            else
            {
                temp->set_task_status(new_status);
                cout << "Status changed" << endl;
            }
            break;
        }
        temp = temp->get_next();
    }

    if (temp == nullptr)
    {
        cout << "Task with name '" << task_name << "' not found." << endl;
    }
}

void view_task(Task **head)
{
    Task *temp = *head;
    if (*head == nullptr)
    {
        cout << "Task list is empty" << endl;
    }
    else
    {
        while (temp != nullptr)
        {
            cout << "Task name: " << temp->get_task_name() << endl;
            cout << "Task Description: " << temp->get_task_description() << endl;
            cout << "Task Priority: " << temp->get_task_priority() << endl;
            cout << "Task status: " << temp->get_task_status() << endl;
            cout << "Task Due Date: " << temp->get_task_due_date() << endl;
            cout << endl;
            temp = temp->get_next();
        }
    }
}

void sort_task(Task **head)
{
    // Implementation to sort the tasks in the list
}

int main()
{
    Task *head = nullptr;
    int choice;

    do
    {
        cout << "Which operation do you want to perform:\n1. Add task\n2. Change task status\n3. View task\n4. Sort task\n0. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_task(&head);
            break;
        case 2:
            change_status(&head);
            break;
        case 3:
            view_task(&head);
            break;
        case 4:
            sort_task(&head);
            break;
        case 0:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice entered" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
