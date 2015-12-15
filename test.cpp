#include "list.h"

int main(){


	List<int> scores = List<int>();
	scores.insert(1);
	scores.insert(2);
	scores.insert(3);
	scores.insert(4);
	scores.print_list();

	cout << scores.size();
 return 0;	
}
