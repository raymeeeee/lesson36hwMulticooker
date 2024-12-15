#include "MyPriorityQueue.h"
#include "Ingridient.h"

int main()
{
    myQueue::PriorityQueue<Ingridient> dish;

    string option;
    while (true) {
        cout << "Enter what you want to do: " << endl;
        cout << "ADD to add ingridient" << endl;
        cout << "FINISH to cook the dish" << endl;
        cin >> option;
        if (option == "ADD") {
            string name;
            float minutes;
            cout << "Enter name of the ingridient: "; cin >> name;
            cout << "Enter minutes to cook: ";  cin >> minutes;
            cout << endl;
            Ingridient ingridient(name, minutes);

            dish.push_back(ingridient);

            dish.show();
        }
        else if (option == "FINISH") {
            dish.show();
            break;
        }
        else {
            cout << "Incorrect option choice" << endl;
            cout << endl;
        }
    }
}
