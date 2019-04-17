#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QString>
#include <QSet>
#include <QList>
#include <QFileInfo>
#include <QTableWidget>


class FileManager
{

public:
    FileManager();
    QList <QString> fileList;

    void standardOrganize();
    void noStandardOrganize(QString);
    void customOrganize(QString, QString, bool);
    void standardClean(bool,bool,bool);
    void customClean(QString);
    void changeWhiteToHardSpaces();
    void changeHardToWhiteSpaces();
    void removeWhiteSpaces();
    void removeHardSpaces();
    void exchange(QTableWidget *);
    void toUpperCases();
    void toLowerCases();
    void firstCaseUpper();
    void firstCaseLower();
    void everyWordStartsLowerCase();
    void everyWordStartsUpperCase();

    QString getFileExt(QString);
    QString getFileNameWithoutExt(QString);
    QString getFilePath(QString);

private:

};



#endif // FILEMANAGER_H
