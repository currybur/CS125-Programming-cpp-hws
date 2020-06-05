#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
    #include <iostream>
    using namespace std;

    struct studentT
    {
        char id[100];
        char name[100];
        int chinese;
        int math;
        int english;
    };

    extern studentT data[100];
    extern int amofdata;
    void add();
    void modify();
    void display();
    void fetchid();
    void fetchname();
    void idsortasc();
    void scoresortdes();
    bool charsame(char *a, char *b,int len);
    int leng(char *a);
    bool comp_char(char *a, char *b, int lena, int lenb);

#endif // FUNC_H_INCLUDED
