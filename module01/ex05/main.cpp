#include "Harl.hpp"
using namespace std;

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	cout << "\n";
	harl.complain("INFO");
	cout << "\n";
	harl.complain("WARNING");
	cout << "\n";
	harl.complain("ERROR");
	return 0;
}
