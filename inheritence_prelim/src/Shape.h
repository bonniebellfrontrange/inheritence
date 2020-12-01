/*
 * Shape Class
 *
 *  Created on: Dec 1, 2020
 *      Author: cj6bo
 */

#include <iostream>

class Shape
{
    private:
		int type;
		int size;
		void printTriangle(int size);
		void printSquare(int size);
		void printDiamond(int size);

    public:
		enum shape_type{
			diamond,
			triangle,
			square
		};
        Shape(int type, int size);
        void print();
};
