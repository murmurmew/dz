
#include <vector>
using namespace std;

bool check_skobki(char strk[], int dlina) {

	vector <int> skobki_to_num(dlina);

	int type_1 = 0;
	int type_2 = 0;




	for (int i = 0; i < dlina; i++) {
		if (strk[i] == '(') {
			type_1 = type_1 + 1;

			skobki_to_num.at(i) = 1;

		}
		if (strk[i] == ')') {
			type_1 = type_1 - 1;

			skobki_to_num.at(i) = -1;

		}
		if (strk[i] == '[') {
			type_2 = type_2 + 1;

			skobki_to_num.at(i) = 2;

		}
		if (strk[i] == ']') {
			type_2 = type_2 - 1;

			skobki_to_num.at(i) = -2;

		}

	}


	bool check = false;

	if ((type_1 == 0) && (type_2 == 0)) {
		check = true;
	}
	else {
		check = false;
	}


	if (check == true) {


		for (int i = 1; i < dlina; i++) {
			if (((skobki_to_num.at(i) == -1) && (skobki_to_num.at(i - 1) == 2)) ||
				((skobki_to_num.at(i) == 1) && (skobki_to_num.at(i - 1) == -2))) {
				check = false;
				break;
			}

		}

	}

	return check;
}


int main()
{

	char strk[] = "(([))";
}
