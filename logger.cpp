#include "logger.h"

Logger::Logger(QObject *parent) : QObject(parent)
{

}

QString Logger::file() const
{
    return m_file;
}

void Logger::setFile(const QString &file)
{
    m_file = file;
}

void Logger::log(QString &data)
{
    if(m_file.isEmpty())
    {
        qWarning() << "File path not set!";
        return;
    }

    QFile file(m_file);
    if(!file.open(QIODevice::Append))
    {
        qWarning() << file.errorString();
        return;
    }

    QTextStream stream(&file);
    stream << data << "\n";
    file.close();
}
