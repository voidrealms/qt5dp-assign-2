#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QDebug>

//Simple, does what you expect it to do and closes resources not in use
//Good design is simple, easy to understand and lacks any mystery

class Logger : public QObject
{
    Q_OBJECT
public:
    explicit Logger(QObject *parent = nullptr);


    QString file() const;
    void setFile(const QString &file);

    void log(QString &data);
signals:


private:
    QString m_file;
};

#endif // LOGGER_H
