#include <iostream>
#include <random>
#include <chrono>
class subvector {
   protected:
     int *mas;
     unsigned int top; 
     unsigned int capacity;

    public:
subvector() {
    top = 0;
    capacity = 0;
    mas = NULL;
}

void push_back(int d) {
    if (capacity == 0) {
        int *a = new int[10];
	mas = a;
        capacity = 10;
    }
    if (top >= capacity) {
        int *b = new int[2*top];
        for (int i = 0; i < top; i++) {
            b[i] = mas[i];
        }
    delete[] mas;
    mas = b;
    capacity *= 2;
    }
    mas[top] = d;
    top++;
    return;
}

int pop_back() {
    if (top == 0) {
        return 0;
    }
    top--;
    int d = mas[top];
    return d;
}


void resize(unsigned int new_capacity) {
    if (capacity == 0) {
	int* tmp = new int[new_capacity];
	mas=tmp;
	capacity = new_capacity;
	return;
}
    if (new_capacity == 0) {
	if (capacity != 0) {
	    delete[] mas;
	}
	top = 0;
	capacity = 0;
	return;
}
    if (top <= new_capacity) {
        int *a = new int[new_capacity];
        for (unsigned int i = 0; i < top; i++) {
            a[i] = mas[i];
        }
        delete[] mas;
        mas = a;
        capacity = new_capacity;
    }
    else {
        int *a = new int[new_capacity];
        for (unsigned int i = 0; i < new_capacity; i++) {
            a[i] = mas[i];
        }
        delete[] mas;
        mas = a;
        capacity = new_capacity;
        top = new_capacity;
    }
    return;
}

void shrink_to_fit() {
	if (top == 0) {
		delete[] mas;
		mas = nullptr;
		return;
}
	if (top > 0) {
		int* tmp = new int[top];
        for (unsigned int i = 0; i < top; i++) {
            tmp[i] = mas[i];
        }
        delete[] mas;
        mas = tmp;
        capacity = top;
}
return;
}

void clear() {
	top = 0;
}

~subvector() {
		delete[] mas;
}
};
using namespace std;

int main()
{
    subvector sv;
    sv.init();
//----------- Test 000 Straight push_back
    for (int i = 0; i < 25; i++)
    {
        sv.push_back(i);
    }
//----------- Test 001 Straight pop_back
    int sum_back = 0;
    for (int i = 0; i < 15; i++)
    {
        sum_back += sv.pop_back();
    }
    cout << sum_back << endl;
//----------- Test 002 Straight resize up
    for (int i = 0; i < 15; i++)
    {
        sv.resize(i);
    }
    sv.shrink_to_fit();
//----------- End of tests
    sv.destructor();
    return 0;
}
