#include "music.h"
#include <iostream>
using namespace std;

int main() {
    // Создаем объекты различных жанров музыки
    Rock rock("Rock", "A genre of popular music", "Alternative");
    Metal metal("Metal", "Heavy form of rock music", "Thrash", "United States");
    Pop pop("Pop", "Popular music", 100);
    HipHop hipHop("Hip-Hop", "Cultural movement", true);
    Jazz jazz("Jazz", "Improvisational music", "Piano, Saxophone");
    Classical classical("Classical", "Art music from the Western tradition", "Bach");
    Electronic electronic("Electronic", "Music produced by electronic instruments", "Synthesizer");

    // Вызываем метод play для каждого жанра
    rock.play();
    metal.play();
    pop.play();
    hipHop.play();
    jazz.play();
    classical.play();
    electronic.play();

    return 0;
}
