// doubly_linked_list
// This reads a list forwards and backwards
// Anthony Frederick
// 03/27/25

#include <iostream>

struct Element {

    // This allows the list to be read forwards and backwards
    Element* next = nullptr;
    Element* previous = nullptr;

    // This is to read forward in the list
    void insert_after(Element* new_element) {
        new_element->next = this->next;
        this->next = new_element;
        new_element -> previous = this;
    };

    // This is to read backwards in the list
    void insert_before(Element* new_element){
        new_element->next = this;
        new_element->previous = this->previous;
        this->previous = new_element;
    };

    // This is for the prefixes for the stormtroopers
    char prefix[2];
    short operating_number; 
    };

    int main(){

    // This is the variables for the stormtroopers 
    Element trooper1, trooper2, trooper3;
	
    // This adds the prefixes to the storm troopers to distinguish them
	trooper1.prefix[0] = 'T';
	trooper1.prefix[1] = '1';
    trooper1.prefix[2] = '\0';
	trooper1.operating_number = 421;
	trooper2.prefix[0] = 'T';
	trooper2.prefix[1] = '2';
    trooper2.prefix[2] = '\0';
	trooper2.operating_number = 2187;
	trooper2.insert_before(&trooper1);
	trooper2.insert_after(&trooper3);
	trooper3.prefix[0] = 'T';
	trooper3.prefix[1] = '3';
    trooper3.prefix[2] = '\0';
	trooper3.operating_number = 005;

    // This traverses the list from front to back
	printf("List Traversal from front-back:\n");
	for (Element* cursor = &trooper1; cursor; cursor = cursor->next) {
		printf("stormtrooper %c%c-%d\n",
			cursor->prefix[0],
			cursor->prefix[1],
			cursor->operating_number);
	}

    // This traverses the list from back to front
	printf("\nList Traversal from back-front:\n");
	for (Element* cursor = &trooper3; cursor; cursor = cursor->previous) {
		printf("stormtrooper %c%c-%d\n",
			cursor->prefix[0],
			cursor->prefix[1],
			cursor->operating_number);
	}
};