class MusicGenre {
protected:
    string name;
    string description;
public:
    MusicGenre(string name, string description);
    virtual ~MusicGenre();
    virtual void play() = 0;
};

class Rock : public MusicGenre {
private:
    string subgenre;
public:
    Rock(string name, string description, string subgenre);
    void play() override;
};

class Metal : public Rock {
private:
    string origin;
public:
    Metal(string name, string description, string subgenre, string origin);
    void play() override;
};

class Pop : public MusicGenre {
private:
    int popularity;
public:
    Pop(string name, string description, int popularity);
    void play() override;
};

class HipHop : public MusicGenre {
private:
    bool isRap;
public:
    HipHop(string name, string description, bool isRap);
    void play() override;
};

class Jazz : public MusicGenre {
private:
    string instrumentation;
public:
    Jazz(string name, string description, string instrumentation);
    void play() override;
};

class Classical : public MusicGenre {
private:
    string composer;
public:
    Classical(string name, string description, string composer);
    void play() override;
};

class Electronic : public MusicGenre {
private:
    string equipment;
public:
    Electronic(string name, string description, string equipment);
    void play() override;
};
