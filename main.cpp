#include <iostream>
#include "include/Contact.h"

using namespace std;

int main() {
    Contact c1("CT001", "Alice Wonderland", "0987654321", "alice@email.com", "London", "Friend", "Met at party");

    cout << "--- Testing Display Raw ---" << endl;
    c1.displayRaw();

    c1.setFavorite(true);

    cout << "\n--- Testing Display Detail ---" << endl;
    c1.displayDetail();

    cout << "\n--- Testing File String Format ---" << endl;
    cout << c1.toString() << endl;

    return 0;
}
