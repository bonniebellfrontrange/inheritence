#include "Shape.h"

using namespace std;

Shape::Shape(int type_of_shape, int size_of_shape) {
	type = type_of_shape;
	size = size_of_shape;
	switch (type) {
	case shape_type::triangle:
		if (size % 2 == 0) {
			size++;
			cout<<"Invalid Size for specified Shape, making larger"<<endl;
		}
		break;
	case shape_type::diamond:
		if (size < 3) {
			size = 3;
			cout<<"Making diamond minimum size of 3"<<endl;
		}
		if ( ( (size - 3) % 2) != 0) {
			size++;
			cout<<"Invalid Size for specified shape, making larger"<<endl;
		}
		break;
	case shape_type::square:
		break;
	default: break;
	}
}
void Shape::printTriangle(int size) {
	//first row - single star
	for (int j=0; j< size/2; j++) {
		cout<<" ";
	}
	cout<<"*";
	for (int j=0; j< size/2; j++) {
		cout<<" ";
	}
	cout<<endl;
	//row 2-(last-1) spaces * spaces * spaces
	for (int i=0; i < (size - 3)/2; i++) {
		for (int j=1; j< (size-1)/2-i; j++) cout<<" ";
		cout<<"*";
		for (int j=0; j<(i*2+1); j++) cout<<" ";
		cout<<"*";
		for (int j=0; j< size/2-i; j++) cout<<" ";
		cout<<endl;
	}
	//last row all *s
	for (int i=0; i< size; i++){
		cout<<"*";
	}
	cout<<endl;
}
void Shape::printDiamond(int size) {}
void Shape::printSquare(int size) {}
void Shape::print(){
	switch (type) {
	case shape_type::triangle:
		printTriangle(size);
		break;
	case shape_type::diamond:
		printDiamond(size - 3);
		break;
	case shape_type::square:
		printSquare(size);
		break;
	}
}
