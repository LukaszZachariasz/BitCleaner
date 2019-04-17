#include "FileManager.h"
#include <QDebug>


FileManager::FileManager() {

}

QString FileManager::getFileExt(QString filePath) {

    QString fileExt = "";

    QFile f(filePath);
    QFileInfo fileInfo(f.fileName());

    if (fileInfo.isDir() && !fileInfo.isSymLink()) {
        return "";
    }

    for (int i = filePath.length()-1; i >= 0; i--) {
        if (filePath.at(i) != ".") {
            fileExt.push_front(filePath.at(i));
        } else {
            fileExt.push_front(filePath.at(i));
            break;
        }
    }

    return fileExt;
}

QString FileManager::getFileNameWithoutExt(QString filePath) {

    bool afterExt = false;
    int j = 0;
    QString fileBaseName = "";

    for (int i = filePath.length()-1; i >= 0; i--) {

        if (filePath.at(i) == "/") {
            break;
        }

        QFile f(filePath);
        QFileInfo fileInfo(f.fileName());

        if (fileInfo.isDir() && !fileInfo.isSymLink()){
            afterExt = true;
        }
        else
            if (filePath.at(i) == ".") {
                afterExt = true;
                j++;
                if (j==1)
                    continue;
            }

        if (afterExt){
            fileBaseName.push_front(filePath.at(i));
        }
    }

    return fileBaseName;
}

QString FileManager::getFilePath(QString filePath) {

    for (int i = filePath.length()-1; i >= 0; i--) {

        if (filePath.at(i) == "/") {
            break;
        } else {
            filePath.remove(i,1);
        }
    }
    return filePath;
}

void FileManager::standardOrganize() {

    QList<QString>::iterator i;
    int counter = 1;
    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName = getFilePath(*i) + QString::number(counter++) +". "+ getFileNameWithoutExt(*i) + getFileExt(*i);
        f.rename(newName);
    }

}

void FileManager::noStandardOrganize(QString noteText) {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i ){
        QFile f(*i);
        QString newName = getFilePath(*i) + noteText + getFileNameWithoutExt(*i) + getFileExt(*i);
        f.rename(newName);
    }

}

void FileManager::customOrganize(QString firstNote, QString secondNote, bool isFileName) {

    QList<QString>::iterator i;
    int counter = 1;
    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
		
        if (isFileName)
            newName = getFilePath(*i) + firstNote + QString::number(counter++) + secondNote + getFileNameWithoutExt(*i) + getFileExt(*i);
        else
            newName = getFilePath(*i) + firstNote + QString::number(counter++) + secondNote + getFileExt(*i);

        f.rename(newName);
    }

}

void FileManager::standardClean(bool c1, bool c2, bool c3) {

    QList<QString>::iterator i;
    for (i = fileList.begin(); i != fileList.end(); ++i){
		
        QFile f(*i);
        QString newName;

        QString s1 = ".,-+=", s2 = "1234567890", s3 = "!@#$%^()";

        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        if (c1)
            for (int i = 0; i < s1.length(); i++)
                for (int j = 0; j < name.length(); j++) {
                    if (s1.at(i)==name.at(j)) {
                        name.remove(j,1);
                        i = 0; j=0;
                    }
                }

        if (c2)
            for (int i = 0; i < s2.length(); i++)
                for (int j = 0; j < name.length(); j++) {
                    if (s2.at(i)==name.at(j)) {
                        name.remove(j,1);
                        i = 0; j=0;
                    }
                }

        if (c3)
            for (int i = 0; i < s3.length(); i++)
                for (int j = 0; j < name.length(); j++) {
                    if (s3.at(i)==name.at(j)) {
                        name.remove(j,1);
                        i = 0; j=0;
                    }
                }

        qDebug() << name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        qDebug() << newName;
        f.rename(newName);
    }

}

void FileManager::customClean(QString chars) {

    QList<QString>::iterator i;
    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int i = 0; i < chars.length(); i++)
            for (int j = 0; j < name.length(); j++) {
                if (chars.at(i)==name.at(j)) {
                    name.remove(j,1);
                    i = 0; j=0;
                }
            }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }

}

void FileManager::changeHardToWhiteSpaces() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int j = 0; j < name.length(); j++) {
            if (QString("_").compare(name.at(j)) == 0) {
                name.replace(j,1," ");
            }
        }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }

}

void FileManager::changeWhiteToHardSpaces() {
    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int j = 0; j < name.length(); j++) {
            if (QString(" ").compare(name.at(j)) == 0) {
                name.replace(j,1,"_");
            }
        }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

void FileManager::removeHardSpaces() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int j = 0; j < name.length(); j++) {
            if (QString("_").compare(name.at(j)) == 0) {
                name.remove(j,1);
                j=0;
            }
        }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}


void FileManager::removeWhiteSpaces() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int j = 0; j < name.length(); j++) {
            if (QString(" ").compare(name.at(j)) == 0) {
                name.remove(j,1);
                j=0;
            }
        }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }

}

bool isItemEmpty(QTableWidget *changeTable, int i) {

    if (changeTable->item(i,0) == nullptr ||
            changeTable->item(i,1) == nullptr ||
            QString("").compare(changeTable->item(i,0)->text()) == 0 ||
            QString("").compare(changeTable->item(i,1)->text()) == 0)
        return true;
    return false;

}


void FileManager::exchange(QTableWidget *changeTable){


    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;

        for (int i = 0; i < changeTable->rowCount(); i++) {

            if (isItemEmpty(changeTable, i))
                continue;

            if (name.contains(changeTable->item(i,0)->text(),Qt::CaseInsensitive))
                name.replace(changeTable->item(i,0)->text(), changeTable->item(i,1)->text());

        }

        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }

}



void FileManager::toLowerCases() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name = name.toLower();
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

void FileManager::toUpperCases() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name = name.toUpper();
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

void FileManager::firstCaseLower() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name[0] = name[0].toLower();
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

void FileManager::firstCaseUpper() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name[0] = name[0].toUpper();
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

QString toCamelCase(const QString& s, bool startUpper) {

    QStringList parts = s.split(' ', QString::SkipEmptyParts);

    for (int i = 0; i < parts.size(); ++i)
        if (startUpper)
            parts[i].replace(0, 1, parts[i][0].toUpper());
        else
            parts[i].replace(0, 1, parts[i][0].toLower());

    return parts.join(" ");
}


void FileManager::everyWordStartsLowerCase() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name = toCamelCase(name, false);
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}

void FileManager::everyWordStartsUpperCase() {

    QList<QString>::iterator i;

    for (i = fileList.begin(); i != fileList.end(); ++i){
        QFile f(*i);
        QString newName;
        QString name = getFileNameWithoutExt(*i);
        qDebug()<<name;
        name = toCamelCase(name, true);
        qDebug()<<name;
        newName = getFilePath(*i) + name + getFileExt(*i);
        f.rename(newName);
        qDebug() << newName;
    }
}








