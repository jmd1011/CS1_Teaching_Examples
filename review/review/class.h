#ifndef CLASS_H
#define CLASS_H

class myClass
{
private:
	int data, data2;
public:
	myClass();
	myClass(int, int);
	void setData(int);
	void setData2(int num){data2 = num;};
	int getData();
};

#endif