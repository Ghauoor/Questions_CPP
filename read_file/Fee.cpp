#include <iostream>
#include <string>

using namespace std;

class Fee
{
protected:
    int feeID;
    double amount;
    int studentID;
    string feeStatus;

public:
    Fee(int id, double amt, int stdID)
        : feeID(id), amount(amt), studentID(stdID), feeStatus("Pending") {}

    int getFeeID() const
    {
        return feeID;
    }

    double getAmount() const
    {
        return amount;
    }

    int getStudentID() const
    {
        return studentID;
    }
    string getFeeStatus() const
    {
        return feeStatus;
    }
    virtual void displayDetails()
    {
        cout << "Fee ID: " << feeID << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Amount: $" << amount << endl;
        cout << "Fee Status: " << feeStatus << endl;
    }

    virtual void updateFeeStatus(string status)
    {
        feeStatus = status;
    }
};

class TuitionFee : public Fee
{
private:
    string courseName;

public:
    TuitionFee(int id, double amt, int stdID, const string &course)
        : Fee(id, amt, stdID), courseName(course) {}

    void displayDetails() override
    {
        Fee::displayDetails();
        cout << "Course: " << courseName << endl;
    }
};

class FeeManagementSystem
{
private:
    static const int MAX_FEES = 100;
    Fee *fees[MAX_FEES];
    int numFees;

public:
    FeeManagementSystem() : numFees(0) {}

    void addFee(Fee *fee)
    {
        if (numFees < MAX_FEES)
        {
            fees[numFees++] = fee;
            cout << "Fee added successfully." << endl;
        }
        else
        {
            cout << "Fee limit reached. Cannot add more fees." << endl;
        }
    }

    void displayFees()
    {
        for (int i = 0; i < numFees; i++)
        {
            fees[i]->displayDetails();
            cout << endl;
        }
    }

    void updateFeeStatus(int feeID, string newStatus)
    {
        for (int i = 0; i < numFees; i++)
        {
            if (fees[i]->getFeeID() == feeID)
            {
                fees[i]->updateFeeStatus(newStatus);
                cout << "Fee status updated successfully." << endl;
                return;
            }
        }
        cout << "Fee not found." << endl;
    }

    void deleteFee(int feeID)
    {
        for (int i = 0; i < numFees; i++)
        {
            if (fees[i]->getFeeID() == feeID)
            {
                delete fees[i];
                fees[i] = fees[numFees - 1];
                numFees--;
                cout << "Fee deleted successfully." << endl;
                return;
            }
        }
        cout << "Fee not found." << endl;
    }

    void searchFeeByID(int feeID)
    {
        for (int i = 0; i < numFees; i++)
        {
            if (fees[i]->getFeeID() == feeID)
            {
                fees[i]->displayDetails();
                return;
            }
        }
        cout << "Fee not found." << endl;
    }

    void searchFeeByStudentID(int studentID)
    {
        cout << "Fees for Student ID " << studentID << ":" << endl;
        for (int i = 0; i < numFees; i++)
        {
            if (fees[i]->getStudentID() == studentID)
            {
                fees[i]->displayDetails();
                cout << endl;
            }
        }
    }

    void searchFeeByAmount(double amount)
    {
        cout << "Fees with Amount $" << amount << ":" << endl;
        for (int i = 0; i < numFees; i++)
        {
            if (fees[i]->getAmount() == amount)
            {
                fees[i]->displayDetails();
                cout << endl;
            }
        }
    }

    void generateReports()
    {
        double totalCollectedAmount = 0.0;
        int numPendingFees = 0;

        cout << "Fee Reports" << endl;
        cout << "===========" << endl;

        for (int i = 0; i < numFees; i++)
        {
            totalCollectedAmount += fees[i]->getAmount();
            if (fees[i]->getFeeStatus() == "Pending")
            {
                numPendingFees++;
            }
        }

        cout << "Total Number of Fees: " << numFees << endl;
        cout << "Total Collected Amount: $" << totalCollectedAmount << endl;
        cout << "Number of Pending Fees: " << numPendingFees << endl;
    }
};

int main()
{
    FeeManagementSystem system;

    while (true)
    {
        cout << "Fee Management System" << endl;
        cout << "1. Manage Fees" << endl;
        cout << "2. Search Fees" << endl;
        cout << "3. Reports of Fees" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "a. Add Fees" << endl;
            cout << "b. Display Fees" << endl;
            cout << "c. Update Fees" << endl;
            cout << "d. Delete Fees" << endl;

            char subChoice;
            cin >> subChoice;

            switch (subChoice)
            {
            case 'a':
            {
                int id, stdID;
                double amt;
                string course; // New variable for course name

                cout << "Enter Fee ID: ";
                cin >> id;
                cout << "Enter Student ID: ";
                cin >> stdID;
                cout << "Enter Amount: ";
                cin >> amt;
                cout << "Enter Course Name: ";
                cin.ignore();
                getline(cin, course);

                Fee *newFee = new TuitionFee(id, amt, stdID, course); // Using TuitionFee class
                system.addFee(newFee);
                break;
            }
            case 'b':
            {
                system.displayFees();
                break;
            }
            case 'c':
            {
                int feeID;
                string newStatus;
                cout << "Enter Fee ID: ";
                cin >> feeID;
                cout << "Enter new status: ";
                cin.ignore();
                getline(cin, newStatus);
                system.updateFeeStatus(feeID, newStatus);
                break;
            }
            case 'd':
            {
                int feeID;
                cout << "Enter Fee ID to delete: ";
                cin >> feeID;
                system.deleteFee(feeID);
                break;
            }
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
            }
            break;
        }
        case 2:
        {
            cout << "a. Search by Fee ID" << endl;
            cout << "b. Search by Student ID" << endl;
            cout << "c. Search by Amount" << endl;

            char searchSubChoice;
            cin >> searchSubChoice;

            switch (searchSubChoice)
            {
            case 'a':
            {
                int feeID;
                cout << "Enter Fee ID to search: ";
                cin >> feeID;
                system.searchFeeByID(feeID);
                break;
            }
            case 'b':
            {
                int studentID;
                cout << "Enter Student ID to search: ";
                cin >> studentID;
                system.searchFeeByStudentID(studentID);
                break;
            }
            case 'c':
            {
                double amount;
                cout << "Enter Amount to search: ";
                cin >> amount;
                system.searchFeeByAmount(amount);
                break;
            }
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
            }
            break;
        }
        case 3:
        {
            system.generateReports();
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    return 0;
}