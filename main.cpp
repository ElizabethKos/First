#include <QCoreApplication>
#include <iostream>
#include <QTextStream>
#include <QCoreApplication>
#include <QDebug>
#include <QVector>
using namespace std;

class Numb {   //класс для первой задачи
private:
    int n;

public:
    Numb(int num) : n(num)
    {}
    void Insert() {
        int k(0), p(0);
        while (n > 0) {
            p = 900 + p * 100 + n % 10 * 10;
            n = n / 10;
        }
        while (p > 10) {
            k = k * 10 + p % 10;
            p = p / 10;
        }
        cout << "Result:" << k << endl;
    }
};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream out(stdout);
    QTextStream in(stdin);

    int n;
    out << "Enter " << Qt::endl;
    in >> n >> Qt::endl;
    Numb numInsert(n);
    numInsert.Insert();

    return a.exec();
}

