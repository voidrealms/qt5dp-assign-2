#include <QCoreApplication>
/*

 SOLID - https://en.wikipedia.org/wiki/SOLID
 Single Responsibility Principle
 Open/Closed Principle
 Liskov Substitution Principle
 Interface Segregation Principle
 Dependency Inversion Principle

 What
 Make a simple class that logs stdin to a file

 Define
 Follow as many of the solid princibles as you can

 Why
 Making a simple class is not always that easy

 Example
 Simple logger

 */

#include <QTextStream>
#include "logger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream stream(stdin);
    Logger logger;
    logger.setFile("test.txt");
    while(!stream.atEnd())
    {
        QString value = stream.readLine();
        logger.log(value);
    }

    return a.exec();
}
