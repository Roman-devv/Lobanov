#include "music.h"
#include <iostream>

using namespace std;

MusicGenre::MusicGenre(string name1, string discription1) {
    name = name1;
    discription = discription1;
}

MusicGenre::~MusicGenre() {
    name = "None";
    discription = "None";
}


Rock::Rock(string name1, string discription1, string subgenre1){
	name = name1;
        discription = discription1;
	subgenre = subgenre1;
}

void Rock::play() {
    cout << "la la la" << endl;
    return;
}

Metal::Metal(string name1, string discription1, string subgenre1, string origin1){
        name = name1;
        discription = discription1;
        subgenre = subgenre1;
	origin = origin1;
}

void Metal::play() {
    cout << "lo lo lo" << endl; 
    return;
}

Pop::Pop(string name1, string discription1, string popularity){
        name = name1;
        discription = discription1;
        popularity = popularity1;
}

void Pop::play() {
    cout << "li li li" << endl; 
    return;
}

Hiphop::Hiphop(string name1, string discription1, bool isRap1){
        name = name1;
        discription = discription1;
        isRap = isRap1;
}

void Hiphop::play() {
    cout << "lu lu lu" << endl; 
    return;
}

Jazz::Jazz(string name1, string discription1, string instrumentation1){
        name = name1;
        discription = discription1;
        instrumentation = instrumentation1;
}

void Jazz::play() {
    cout << "ah ah ah" << endl; 
    return;
}

Classical::Classical(string name1, string discription1, string composer1){
        name = name1;
        discription = discription1;
        composer = composer1;
}

void Classical::play() {
    cout << "boom la la" << endl; 
    return;
}

Electronic::Electronic(string name1, string discription1, string equipment1){
        name = name1;
        discription = discription1;
        equipment = equipment1;
}

void Electronic::play() {
    cout << "yo yo yo" << endl; 
    return;
}
