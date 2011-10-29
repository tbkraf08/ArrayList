//testArrayList.cpp

#include "ArrayList.h"
#include <iostream>

using namespace std;
int main(){
	//locally created arraylist
	ArrayList al(6);
	cout << "current size of arraylist: " << al.size() << endl;
	for(int i=0; i<10; i++){
		al.add(i);
	}
	

	al.print();
 	cout << "current size of arraylist: " << al.size() << endl;
	cout << "get item at index 1: " << al.get(1) << endl;
	al.set(9, 2.0);
	cout << "set 9th index to 2: ";
	al.print();

	cout << "clone arraylist" << endl;
	
	ArrayList* clone = al.clone();
	clone->print();

	cout << "orignal arraylist address: " << &al << " clone address: " << clone << endl;
	

	//should be true
	if(al == *clone)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	delete clone;

	//dynamicly created arraylist
	ArrayList* all = new ArrayList(6);
	for(int i=0; i<10; i++){
		all->add(i);
	} 
	all->print();

	//should be false
	if(al == *all)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "try and access index not in array" << endl;
	all->get(15);

	//gc
	delete all;
}
