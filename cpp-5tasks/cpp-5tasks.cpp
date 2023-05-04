#include "BinarIntegerTree.h"
#include "locale.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	BinarIntegerTree testTree = BinarIntegerTree();
	try {
		vector<int> v = { 1, 0 };
		testTree.addElem(5, v);
	}
	catch (BadPathException) {
		cout << "Невозможно добавить элемент, у дерева отсутсвует корень!" << endl;
	}
	try {
		testTree.findElem(2);
	}
	catch (NoElemException) {
		cout << "Элемент отсутсвует в дереве!" << endl;
	}
	

	BinarIntegerTree tree;
	vector<int> v = {};				//					                  10
	tree.addElem(10, v);					//								7		    21							
	v = { 1 };								//							 4	  9      16
	tree.addElem(21, v);					//						   2 			    19
	v = { 0 };
	tree.addElem(7, v);
	v = { 0, 0 };
	tree.addElem(4, v);
	v = { 0, 1 };
	tree.addElem(9, v);
	v = { 0, 0, 0 };
	tree.addElem(2, v);
	v = { 1, 0 };
	tree.addElem(16, v);
	v = { 1, 0, 1 };
	tree.addElem(19, v);
	cout << tree << endl;
	cout << "Чётных элементов - " << tree.getEvenCount() << endl;
	cout << "В дереве все элементы положительные - " << tree.checkPositive() << endl;
	cout << "Среднее арифметическое - " << tree.getMiddle() << endl;
	v = tree.findElem(16);
	cout << "Поиск элемента: " << v[0] << "," << v[1] << endl;
	cout << "-------------------------------------------------" << endl;
	v = { 0, 0, 0 };
	tree.addElem(-1, v);
	v = {};
	tree.addElem(45, v);
	cout << tree << endl;
	cout << "Чётных элементов - " << tree.getEvenCount() << endl;
	cout << "В дереве все элементы положительные - " << tree.checkPositive() << endl;
	cout << "Среднее арифметическое - " << tree.getMiddle() << endl;
	cout << "-------------------------------------------------" << endl;
	tree.deleteAllLeafs();
	cout << tree << endl;
	cout << "Чётных элементов - " << tree.getEvenCount() << endl;
	cout << "В дереве все элементы положительные - " << tree.checkPositive() << endl;
	cout << "Среднее арифметическое - " << tree.getMiddle() << endl;
	system("pause");
	return 0;
}