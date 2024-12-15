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
        cout << endl;
        if (option == "ADD") {
            string name;
            float minutes;
            cout << "Enter name of the ingridient: "; cin >> name;
            cout << "Enter minutes to cook: ";  cin >> minutes;
            cout << endl;

            dish.push_back(Ingridient(name, minutes));
        }
        else if (option == "FINISH") {
            while (!dish.isEmpty()) {
                dish.first().showIngridient();
                cout << endl;
                dish.pop_front();
            }
            break;
        }
        else {
            cout << "Incorrect option choice" << endl;
            cout << endl;
        }
    }
}
