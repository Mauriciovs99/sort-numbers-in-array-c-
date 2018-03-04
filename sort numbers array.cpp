//Sort numbers in array
#include <stdio.h>

main (){
	int list [100];
	int list2 [100];
	int nElem=0; //Elements of list1
	int nElem2=0; //Elements of list2
	int position=0; //Number that compares with others, starting by position 0
	int n=0; //ccounter
	int number=0; //is there it is stored in list2 (the new list)
	
	do{
		printf ("How many elements?\n");
		scanf ("%d", &nElem); //saves the number of elements you are going to insert
	} while (nElem<1 || nElem>100);
	
	
	nElem2=nElem; //The list2 is going to have the same number of elements of list1
	
	for (int i=0;i<nElem;i++){
		printf ("Insert the element %d\n", i);
		scanf ("%d", &list[i]); //saves each element in the list
	}
		

	while (nElem>=1){ //while the list has elememts...
		for (n=0;n<nElem;n++){ //compares from 0 to the last element in the list
			if (list[position]>list[n]){ //If the element "position" is bigger than certain element
				position++; // it evaluates the next element "position"
				break; //There is no case of keep evaluating because the element "position" is not the smallest element. The block "for" resets.
			}
		}
		if (n==nElem){ //If the element "position" is the slammest, "n" will be equal to nElem, because the element "position" was been compared to all elements in the list.
			list2 [number]=list[position]; //Element "position" is saved in the new list
			number++; //The new localization of the next element will be the next place in the array
			list[position]=list[nElem-1]; //Remove the "position" element from the first list
			nElem--; //substract 1 from the number of elements in the list 1
			position=0; //Evaluate again from the first position. Reset the block until list 1 has no elements
		}
	}
	
	for (int i=0; i<nElem2;i++){
		printf ("The element %d in the list is %d\n", i, list2[i]); // Print all the sorted elements of the new list.
	}
}
